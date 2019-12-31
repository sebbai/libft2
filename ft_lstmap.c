/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 16:57:16 by sebbaill          #+#    #+#             */
/*   Updated: 2019/12/31 00:11:29 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cursor;
	t_list	*new_lst;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	cursor = lst;
	if (!(new_lst = ft_lstnew(f(cursor->content))))
		return (NULL);
	temp = new_lst;
	cursor = cursor->next;
	while (cursor)
	{
		if (!(new_lst->next = ft_lstnew(f(cursor->content))))
		{
			del(new_lst->content);
			return (NULL);
		}
		new_lst = new_lst->next;
		cursor = cursor->next;
	}
	return (temp);
}
