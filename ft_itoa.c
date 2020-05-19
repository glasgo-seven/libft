/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 15:10:24 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/19 13:23:07 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		sign;
	char	*str;
	int		len;
	int		i;
	
	sign = 0;
	if (n < 0)
		sign = 1;
	len = 0;
	i = n;
	while (i > 0)
	{
		len++;
		i /= 10;
	}
	str = (char*)malloc((len + 1 + sign) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (sign == 1)
		*str = '-';
	i = sign;
	while (i < len)
	{
		*(str + i) = (char)(n % 10);
		n /= 10;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
