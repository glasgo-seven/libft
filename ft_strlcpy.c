/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:51:35 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/25 15:00:53 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
/*	char		*d;
	const char	*s;
	size_t		n;

	d = dest;
	s = src;
	n = size;
	if (n != 0)
		while (--n != 0)
		{
			if ((*d++ = *s++) == '\0')
				break;
		}
	if (n == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s)
			s++;
	}
	return (s - src - 1);
	*/
	size_t	i;
	size_t	n;

	i = 0;
	n = size;
	if (n != 0)
	{
		while (n != 1)
		{
			*(dest + i) = *(src + i);
			if (*(dest + i) == '\0')
				break;
			i++;
			n--;
		}
		n--;
	}
	if (n == 0)
	{
		if (size != 0)
			*(dest + i) = '\0';
		while (*(src + i))
			i++;
	}
	return (i); 
}
