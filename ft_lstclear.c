/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:10:40 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/22 17:06:01 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	**next;

	list = *lst;
	next = &(list->next);
	del(list->content);
	if (list->next)
		ft_lstclear(next, del);
	free(list);
	lst = NULL;
}
