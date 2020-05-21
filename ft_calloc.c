/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:24:03 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/21 16:35:07 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	int		i;

	if (nmemb == 0)
		return (NULL);
	array = (void*)malloc(nmemb * size);
	ft_bzero(array, nmemb);
	return (array);
}
