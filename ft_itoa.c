/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 15:10:24 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 17:16:56 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		i;
	int		len;

	if (n == MIN_INT)
		return (ft_strdup("-2147483648"));
	i = n;
	len = 0;
	if (n == 0)
		len++;
	sign = 0;
	while (i != 0)
	{
		len++;
		i /= 10;
	}
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	str = (char*)malloc(sign + len + 1);
	if (str == NULL)
		return (NULL);
	if (sign == 1)
		*(str) = '-';
	i = sign + len - 1;
	*(str + (sign + len)) = '\0';
	while (i >= sign)
	{
		*(str + i) = (n % 10) + '0';
		i--;
		n /= 10;
	}
	return (str);
}
