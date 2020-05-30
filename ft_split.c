/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 20:01:42 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/30 20:01:51 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_count(char const *s, char c)
{
	int		words;
	int		i;

	words = (s[0] != 'c' ? 1 : 0);
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

static void	*ft_free(void **array, int last)
{
	int	i;

	i = last;
	if (array == NULL)
		return (NULL);
	while (i >= 0)
	{
		if (array[i])
			free((void*)array[i]);
		i--;
	}
	free((void*)array);
	return (NULL);
}

static char	**get_words(char const *s, char c)
{
	char	**split;
	size_t	word;
	size_t	i;
	size_t	len;

	if (!(split = (char**)malloc((get_word_count(s, c) + 1) * sizeof(char*))))
		return (NULL);
	i = -1;
	word = 0;
	len = 0;
	while (++i <= ft_strlen(s))
	{
		if (s[i] == c || s[i] == '\0')
		{
			if (len != 0)
			{
				if(!(split[word] = (char*)malloc((len + 1) * sizeof(char*))))
					return (ft_free((void*)split, word - 1));
				ft_strlcpy(split[word++], s + (i - len), len + 1);
			}
			len = 0;
		}
		else
			len++;
	}
	split[word] = NULL;
	return (split);
}

char		**ft_split(char const *s, char c)
{
	return (get_words(s, c));
}
