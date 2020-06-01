/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 23:37:43 by sanakin           #+#    #+#             */
/*   Updated: 2020/06/01 20:28:01 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*small == '\0')
		return ((char*)big);
	while (big[j] != '\0' && len > j)
	{
		i = 0;
		if (big[j] == small[i])
		{
			while (big[j + i] == small[i] && big[j + i] && small[i] &&
					(j + i) < len)
				i++;
			if (small[i] == '\0')
				return ((char*)&big[j]);
		}
		j++;
	}
	return (NULL);
}
