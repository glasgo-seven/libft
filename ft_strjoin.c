/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 14:41:13 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 18:25:49 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	j_i;
	size_t	s_i;

	joined = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	j_i = 0;
	s_i = 0;
	while (*(s1 + s_i) != '\0')
	{
		*(joined + j_i) = *(s1 + s_i);
		j_i++;
		s_i++;
	}
	s_i = 0;
	while (*(s2 + s_i) != '\0')
	{
		*(joined + j_i) = *(s2 + s_i);
		j_i++;
		s_i++;
	}
	*(joined + j_i) = '\0';
	return (joined);
}
