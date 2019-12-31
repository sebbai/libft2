/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebbaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:37:27 by sebbaill          #+#    #+#             */
/*   Updated: 2019/12/31 00:10:38 by sebbaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if (!new || !alst)
		return ;
	if (!(*alst))
	{
		(*alst) = new;
		return ;
	}
	new->next = NULL;
	temp = *alst;
	while (temp && temp->next)
		temp = temp->next;
	temp->next = new;
}
