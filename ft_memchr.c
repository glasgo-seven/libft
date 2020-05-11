/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:34:03 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/07 14:58:00 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*n_s;

	i = 0;
	n_s = (unsigned char*)s;
	while (i < n)
	{
		if (*(n_s + i) == (unsigned char)c)
			return (n_s + i);
		i++;
	}
	return (NULL);
}
