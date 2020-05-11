/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 22:51:38 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/07 14:46:36 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*n_s;

	i = 0;
	n_s = (unsigned char*)s;
	while (i < n)
	{
		*(n_s + i) = (unsigned char)c;
		i++;
	}
	return (n_s);
}
