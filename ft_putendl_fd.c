/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 15:26:50 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 17:22:41 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while(*(s + i) != '\0')
	{
		ft_putchar_fd(*(s + i), fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
