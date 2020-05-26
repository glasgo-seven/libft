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
	unsigned char	*temp;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	n_dest = (unsigned char*)dest;
	n_src = (unsigned char*)src;
	temp = (unsigned char*)malloc(n * sizeof(unsigned char));
	i = 0;
	while (i < n)
	{
		*(temp + i) = *(n_src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(n_dest + i) = *(temp + i);
		i++;
	}
	free(temp);
	return (n_dest);
}
