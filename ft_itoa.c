/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 15:10:24 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/23 19:35:29 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		i;
	int		len;

	i = n;
	len = 0;
	sign = 0;
	while (i > 0)
	{
		len++;
		i /= 10;
	}
	if (n < 0)
		sign = 1;
	str = (char*)malloc(sign + len + 1);
	if (sign == 1)
		*(str) = '-';
	i = sign + len;
	*(str + (sign + len + 1)) = '\0';
	while (i >= sign)
	{
		*(str + i) = (n % 10) + '0';
		i--;
		n /= 10;
	}
	return (str);
}
