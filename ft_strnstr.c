/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:25:27 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/22 13:42:04 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	correct;
	char	*rt;

	if (needle == NULL)
		return (NULL);
	i = 0;
	j = 0;
	correct = 0;
	rt = (char*)haystack;
	while (i <= ft_strlen(haystack) - ft_strlen(needle) && i < len)
	{
		j = 0;
		correct = 0;
		while (*(needle + j) != '\0')
		{
			if (*(needle + j) == *(haystack + j))
				correct++;
			j++;
		}
		if (correct == ft_strlen(needle))
		{
			rt = (char*)haystack + i;
			return (rt);
		}
		i++;
	}
	return (NULL);
}
