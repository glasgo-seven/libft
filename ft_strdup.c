/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:25:15 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/30 20:24:39 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*n_s;
	size_t	i;

	n_s = (char*)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (n_s == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(n_s + i) = *(s + i);
		i++;
	}
	*(n_s + i) = '\0';
	return (n_s);
}
