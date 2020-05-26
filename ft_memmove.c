/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:22:45 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 18:24:25 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*n_dest;
	unsigned char	*n_src;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	n_dest = (unsigned char*)dest;
	n_src = (unsigned char*)src;
	i =  n - 1;
	while (i > 0)
	{
		*(n_dest + i) = *(n_src + i);
		i--;
	}
	*n_dest = *n_src;
	return (n_dest);
}
