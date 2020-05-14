/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 15:10:24 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/13 15:21:53 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	sign;
	char	*str;
	int		len;
	int		i;
	
	sign = (n < 0 ? '-' : "");
	str = "";
	len = 0;
	i = n;
	while (i > 0)
	{
		len++;
		i /= 10;
	}
	str = (char*)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(str + i) = (char)(n % 10);
		n /= 10;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
