/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 12:23:27 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/24 17:18:23 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_count(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = (*s == c ? 0 : 1);
	while (*(s + i) != '\0' && *(s + i) == c)
		i++;
	if (*(s + i) == '\0')
		return (0);
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			words++;
		while (*(s + i) == c && *(s + i) != '\0')
			i++;
		if (*(s + i) != '\0')
			i++;
	}
	return (words);
}

static char	**get_words_len(char const *s, char c, int words)
{
	int		i;
	char	**split;
	int		len;
	int		word;

	i = 0;
	split = (char**)malloc(sizeof(char*) * (words + 1));
	if (split == NULL)
		return (NULL);
	len = 0;
	word = 0;
	while (*(s + i) != '\0')
	{
		len = 0;
		while (*(s + i) != c && *(s + i) != '\0')
		{
			len++;
			i++;
		}
		if (len != 0)
		{
			split[word] = (char*)malloc(sizeof(char) * (len + 1));
			if (split[word] == NULL)
				return (NULL);
			word++;
		}
		if (*(s + i) == c)
			i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	int		i;
	int		j;
	int		word;

	words = get_word_count(s, c);
	split = NULL;
	if (words == 0)
	{
		split = (char**)malloc(sizeof(char*) * 1);
		split[0] = NULL;
		return (split);
	}
	split = get_words_len(s, c, words);
	i = 0;
	j = 0;
	word = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(s + i) != c && *(s + i) != '\0')
		{
			split[word][j] = *(s + i);
			j++;
			i++;
		}
		if (j != 0)
		{
			split[word][j] = '\0';
			word++;
		}
		if (*(s + i) == c)
			i++;
	}
	split[word] = NULL;
	return (split);
}
