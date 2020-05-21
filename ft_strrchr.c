/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:25:30 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/21 16:54:13 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*rt;

	i = ft_strlen(s) + 1;
	rt = (char*)s;
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
		{
			rt = (char*)s + i;
			return (rt);
		}
		i--;
	}
	return (NULL);
}
