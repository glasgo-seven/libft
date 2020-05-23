/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 12:47:42 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/23 19:15:29 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		rt;
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
	while (str[c] >= '0' && str[c] <= '9')
	{
		if (len > 10 || (len == 9 && sign == -1 && (str[c] - '0' > 8)) || 
						(len == 9 && sign == 1 && (str[c] - '0' > 7)))
			return (sign == -1 ? 0 : sign);
		rt = rt * 10 + (str[c] - '0');
		c++;
		len++;
	}
	return (rt * sign);
}
