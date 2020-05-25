/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:33:28 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/25 20:35:46 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
/*	const char	*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dest;
	s = (char*)src;
	n = size;
	while (n-- != 0 && *dest != '\0')
		dest++;
	dlen = dest - d;
	n = size - dlen;
	if (n-- == 0)
		return (dlen + ft_strlen(src));
	while (*src != '\0')
	{
		if (n != 0)
		{
			*dest++ = *src;
			n--;
		}
		src++;
	}
	*dest = '\0';
	return (dlen + (src - s));*/

	size_t	n;
	size_t	i;
	size_t	dlen;

	n = size;
	i = 0;
	while (n != 0 && *(dest + i) != '\0')
	{
		n--;
		i++;
	}
	dlen = i;
	n = size - i;
	if (n-- == 0)
		return (i + ft_strlen(src));
	while (*(src + i - dlen) != '\0')
	{
		if (n != 0)
		{
			*(dest + i) = *(src + i - dlen);
			n--;
		}
		else
			break;
		i++;
	}
	*(dest + i) = '\0';
	return (dlen + ft_strlen(src));
}
