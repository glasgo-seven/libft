/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:51:35 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 18:27:16 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = size;
	if (src == NULL)
		return (0);
	if (n != 0)
		while (n != 1)
		{
			*(dest + i) = *(src + i);
			if (*(dest + i) == '\0')
				break ;
			i++;
			n--;
		}
	if (n == 0 || n == 1)
	{
		if (size != 0)
			*(dest + i) = '\0';
		while (*(src + i))
			i++;
	}
	return (i);
}
