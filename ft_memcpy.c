/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 15:06:53 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/08 13:51:33 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*n_dest;
	unsigned char	*n_src;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	n_dest = (unsigned char*)dest;
	n_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		*(n_dest + i) = *(n_src + i);
		i++;
	}
	return (n_dest);
}
