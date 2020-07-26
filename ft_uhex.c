/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uhex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 18:23:29 by sanakin           #+#    #+#             */
/*   Updated: 2020/07/26 20:12:06 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*char_to_str(char c)
{
	char	*str;
	
	if (!(str = (char*)malloc(sizeof(char*) * 2)))
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

static char	in_hex(unsigned	nbr)
{
	return ((nbr < 10) ? (48 + nbr) : (55 + nbr));
}

char		*ft_uhex(size_t nbr)
{
	char	*hex;
	char	*temp_hex;
	char	*temp_digit;

	hex = ft_strdup("");
	while (nbr != 0)
	{
		temp_hex = hex;
		temp_digit = char_to_str(in_hex(nbr % 16));
		hex = ft_strjoin(temp_digit, hex);
		ft_free((void**)&temp_hex);
		ft_free((void**)&temp_digit);
		nbr /= 16;
	}
	return (hex);
}
