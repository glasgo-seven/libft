/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanakin <sanakin@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:10:40 by sanakin           #+#    #+#             */
/*   Updated: 2020/05/23 21:40:46 by sanakin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (*lst == NULL || del == NULL)
		return ;
	del((*lst)->content);
	if ((*lst)->next)
		ft_lstclear(&((*lst)->next), del);
	free(*lst);
	*lst = NULL;
}
