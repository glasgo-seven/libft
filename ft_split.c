/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 12:23:27 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/23 19:39:12 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_count(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 1;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			words++;
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
	split = (char**)malloc(words + 1);
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
		split[word] = (char*)malloc(len + 1);
		word++;
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
		word++;
		i++;
	}
	split[word] = '\0';
	return (split);
}
