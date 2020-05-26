/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:25:23 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 18:29:51 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*n_s1;
	unsigned char	*n_s2;

	if (n == 0)
		return (n);
	i = 0;
	n_s1 = (unsigned char*)s1;
	n_s2 = (unsigned char*)s2;
	while (i < n && *(n_s1 + i) != '\0' && *(n_s2 + i) != '\0')
	{
		if (*(n_s1 + i) == *(n_s2 + i))
			i++;
		else
			return (*(n_s1 + i) - *(n_s2 + i));
	}
	if (i == n)
		return (*(n_s1 + i - 1) - *(n_s2 + i - 1));
	return (*(n_s1 + i) - *(n_s2 + i));
}
