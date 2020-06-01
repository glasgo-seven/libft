/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 23:37:32 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/30 23:37:39 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numwords(char const *s, char c)
{
	int		words;
	int		is_word;

	words = 0;
	is_word = 1;
	while (*s)
	{
		if (*s == c)
			is_word = 1;
		else if (is_word == 1)
		{
			is_word = 0;
			words++;
		}
		s++;
	}
	return (words);
}

static int	numchars(char const *s, char c, int i)
{
	int chars;

	chars = 0;
	while (s[i] != c && s[i] != '\0')
	{
		chars++;
		i++;
	}
	return (chars);
}

static char	**ft_free(char **src, int i)
{
	while (i > 0)
	{
		i--;
		free((void*)src[i]);
	}
	free((void*)src);
	return (NULL);
}

static char	**split_help(char const *s, char c)
{
	char	**split;
	int		word;
	int		i;
	int		chr;

	word = 0;
	i = 0;
	chr = 0;
	if (!(split = (char**)malloc(sizeof(char*) * (numwords(s, c) + 1))))
		return (NULL);
	while (word < numwords(s, c) && s[i])
	{
		chr = 0;
		while (s[i] == c)
			i++;
		if (!(split[word] = (char*)malloc(sizeof(char) *
			(numchars(s, c, i) + 1))))
			return (ft_free(split, word));
		while (s[i] != c && s[i] != '\0')
			split[word][chr++] = s[i++];
		split[word][chr] = '\0';
		word++;
	}
	split[word] = 0;
	return (split);
}

char		**ft_split(char const *s, char c)
{
	if (s == NULL)
		return (NULL);
	else
		return (split_help(s, c));
}
