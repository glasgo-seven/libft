/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 12:23:27 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/27 16:24:02 by sanakin          ###   ########.fr       */
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
		if (*(s + i) == c || (*(s + i) != c && *(s + i + 1) == '\0'))
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
	if (!(split = (char**)ft_calloc(words + 1, sizeof(char*))))
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
			if (!(split[word++] = (char*)ft_calloc(len + 1, sizeof(char))))
				return (ft_free((void**)split, --word));
		if (*(s + i) == c)
			i++;
	}
	return (split);
}

static char	**return_zero(void)
{
	char	**split;

	if (!(split = (char**)malloc(sizeof(char*) * 1)))
		return (NULL);
	split[0] = NULL;
	return (split);
}

static void	set_words(char **split, char const *s, char c)
{
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	words = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(s + i) != c && *(s + i) != '\0')
			split[words][j++] = *(s + i++);
		if (j != 0)
			split[words++][j] = '\0';
		if (*(s + i) == c)
			i++;
	}
	split[words] = NULL;
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	if (s == NULL)
		return (NULL);
	words = get_word_count(s, c);
	split = NULL;
	if (words == 0)
		return (return_zero());
	if (!(split = get_words_len(s, c, words)))
		return (NULL);
	set_words(split, s, c);
	return (split);
}
