/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:50:39 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/25 20:30:32 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinset(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (*(set + i) != '\0')
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	finish;
	char	*trimmed;

	i = 0;
	start = 0;
	finish = 0;
	trimmed = NULL;
	while (isinset(set, *(s1 + i)) == 1 && *(s1 + i) != '\0')
	{
		i++;
	}
	start = i;
	i = ft_strlen(s1) - 1;
	while (isinset(set, *(s1 + i)) == 1 && i != 0)
	{
		i--;
	}
	finish = i + 1;
	if (finish < start)
		return (NULL);
	trimmed = (char*)malloc((finish - start + 1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	i = start;
	while (i < finish)
	{
		*(trimmed + (i - start)) = *(s1 + i);
		i++;
	}
	*(trimmed + i - start) = '\0';
	return (trimmed);
}
