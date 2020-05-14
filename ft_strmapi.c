/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 15:37:05 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/13 15:43:19 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*map;

	len = ft_strlen(s);
	map = (char*)malloc((len + 1) * sizeof(char));
	if (map == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		//*(map + i) = f(i, *(map + i));
		i++;
	}
	*(map + i) = '\0';
	return (map);
}
