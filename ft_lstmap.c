/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:17:45 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/26 18:35:50 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	int		i;
	t_list	*list;
	t_list	*item;
	t_list	*map;

	if (l == NULL || f == NULL)
		return (NULL);
	item = NULL;
	map = NULL;
	list = l;
	i = 0;
	while (i < ft_lstsize(l))
	{
		item = ft_lstnew((f)(list->content));
		if (!item)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, item);
		list = list->next;
		i++;
	}
	return (map);
}
