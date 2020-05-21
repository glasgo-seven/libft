/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:52:13 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/21 18:24:53 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*n_dest;
	unsigned char	*n_src;
	size_t			i;

	n_dest = (unsigned char*)dest;
	n_src = (unsigned char*)src;
	i = 0;
	if (n != 0)
		while (i < n)
		{
			*(n_dest + i) = *(n_src + i);
			if (*(n_src + i) == (unsigned char)c)
				return (n_dest + i + 1);
			i++;
		}
	return (NULL);
}
