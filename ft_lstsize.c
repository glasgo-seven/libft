/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 16:15:39 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/22 14:41:39 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*list;

	list = lst;
	if (!list)
		return (0);
	i = 0;
	while (list->next)
	{
		i++;
		list = list->next;
	}
	i++;
	return (i);
}
