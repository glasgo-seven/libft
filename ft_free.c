/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 01:02:17 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/29 01:02:19 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free(void **array, int last)
{
	int	i;

	i = last;
	if (array == NULL)
		return (NULL);
	while (i >= 0)
	{
		if (array[i])
			free((void*)array[i]);
		i--;
	}
	free((void*)array);
	return (NULL);
}
