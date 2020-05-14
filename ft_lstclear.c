/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:10:40 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/14 15:16:27 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	list = *lst;
	while (list->next)
	{
		del(list->content);
		free(list);
		list = list->content;
	}
	del(list->content);
	free(list);
	list = list->content;
	lst = NULL;
}
