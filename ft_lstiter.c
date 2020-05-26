/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:14:11 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 18:21:44 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*list;

	if (lst == NULL || f == NULL)
		return ;
	list = lst;
	while (list->next)
	{
		f(list->content);
		list = list->next;
	}
	f(list->content);
	list = list->next;
}
