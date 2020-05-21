/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:04:46 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/21 17:15:49 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_s;

	sub_s = (char*)malloc((len + 1) * sizeof(char));
	if (sub_s == NULL)
		return (NULL);
	i = start;
	while (*(s + i) != '\0' && i < len)
	{
		*(sub_s + i - start) = *(s + i);
		i++;
	}
	while (i < len + i)
	{
		*(sub_s + i - start) = '\0';
		i++;
	}
	return (sub_s);
}
