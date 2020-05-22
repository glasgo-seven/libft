/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 15:10:24 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/22 17:26:41 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		sign;
	char	*str;
	int		len;
	int		i;
	int		num;
	
	sign = 0;
	if (n < 0)
		sign = 1;
	len = 0;
	num = n;
	while (i > 0)
	{
		len++;
		num /= 10;
	}
	str = (char*)malloc((sign + len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (sign == 1)
		*str = '-';
	i = sign + len + 1;
	*(str + i) = '\0';
	i--;
	num = n;
	while (i >= sign)
	{
		*(str + i) = (char)(num % 10);
		num /= 10;
		i--;
	}
	return (str);
}
