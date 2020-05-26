/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 12:47:42 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 18:23:48 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	size_t	rt;
	int		c;
	int		sign;
	int		len;

	rt = 0;
	c = 0;
	sign = 1;
	len = 0;
	while ((str[c] >= 8 && str[c] <= 13) || str[c] == 32)
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign = -1;
		c++;
	}
	while (str[c] == '0')
		c++;
	while (str[c] >= '0' && str[c] <= '9')
	{
		rt = rt * 10 + (str[c] - '0');
		len++;
		c++;
	}
	if (rt >= 9223372036854775807)
		return (sign == -1 ? 0 : -1);
	return (rt * sign);
}
