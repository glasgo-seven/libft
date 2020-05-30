/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:25:27 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/30 20:33:42 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	/*size_t	i;
	size_t	j;
	size_t	correct;

	if (*little == '\0')
		return ((char*)big);
	if (!ft_strncmp(big, little,
	(ft_strlen(big) > ft_strlen(little) ? ft_strlen(big) : ft_strlen(little))))
		return ((char*)big);
	i = 0;
	j = 0;
	correct = 0;
	while (i <= ft_strlen(big) - ft_strlen(little) && i < len)
	{
		if (*(big + i++) == *(little + j++))
			correct++;
		else if (correct == ft_strlen(little))
			return ((char*)big + --i - ft_strlen(little));
		else
		{
			j = 0;
			correct = 0;
		}
	}
	return (NULL);*/

	char	c;
	char	sc;
	size_t	_len;

	_len = 0;
	sc = '\0';
	c = '\0';
	if ((c = *little++) != '\0')
	{
		_len = strlen(little);
		while (strncmp(big, little, _len) != 0)
		{
			while (sc != c)
			{
				if ((sc = *big++) == '\0' || len-- < 1)
					return (NULL);
			}
			if (_len > len)
				return (NULL);
		}
		big--;
	}
	return ((char *)big);
	
}
