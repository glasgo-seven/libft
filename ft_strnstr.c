/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:25:27 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/24 17:37:51 by sanakin          ###   ########.fr       */
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
		return ((char*)haystack);
	if (haystack == NULL)
		return (NULL);
	i = 0;
	j = 0;
	correct = 0;
	rt = (char*)haystack;
	while (i <= ft_strlen(haystack) - ft_strlen(needle) && i < len)
	{
		if (*(haystack + i) == *(needle + j))
		{
			correct++;
			j++;
		}
		else if (correct == ft_strlen(needle))
		{
			rt = (char*)haystack + i - ft_strlen(needle);
			return (rt);
		}
		else
		{
			j = 0;
			correct = 0;
		}
		i++;
	}
	return (NULL);
}
