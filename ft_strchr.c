/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:25:08 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/08 17:50:54 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*rt;

	i = 0;
	rt = (char*)s;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
		{
			rt = (char*)s + i;
			return (rt);
		}
		i++;
	}
	if (c == 0)
	{
		rt = (char*)s + i;
		return (rt);
	}
	return (NULL);
}
