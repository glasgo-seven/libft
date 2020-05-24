/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:17:45 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/24 17:39:17 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	**map;
	int		i;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	list = lst;
	map = (t_list**)malloc(ft_lstsize(lst));
	if (map == NULL)
		return (NULL);
	i = 0;
	while (i < ft_lstsize(lst))
	{
		ft_lstadd_back(map, ft_lstnew(f(list->content)));
		list = list->next;
		i++;
	}
	return (*map);
}
