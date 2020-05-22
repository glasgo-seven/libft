/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:17:45 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/22 17:04:11 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	**map;
	int		size;
	int		i;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	size = ft_lstsize(lst);
	list = lst;
	map = (void*)malloc(size);
	i = 0;
	while (i < size)
	{
		ft_lstadd_back(map, ft_lstnew(f(list->content)));
		list = list->next;
		i++;
	}
	return (*map);
}
