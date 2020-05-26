/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:25:27 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 18:33:46 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	correct;
	char	*rt;

	if (*little == '\0')
		return ((char*)big);
	if (!ft_strncmp(big, little, (ft_strlen(big) > ft_strlen(little) ? ft_strlen(big) : ft_strlen(little))))
		return ((char*)big);
	i = 0;
	j = 0;
	correct = 0;
	rt = (char*)big;
	while (i <= ft_strlen(big) - ft_strlen(little) && i < len)
	{
		if (*(big + i) == *(little + j))
		{
			correct++;
			j++;
		}
		else if (correct == ft_strlen(little))
		{
			rt = (char*)big + i - ft_strlen(little);
			return (rt);
		}
		else
		{
			j = 0;
			correct = 0;
		}
		i++;
	}
	return (NULL);
}
