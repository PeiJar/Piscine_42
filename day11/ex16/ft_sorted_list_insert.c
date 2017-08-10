/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:34:39 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/13 14:00:37 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*new_node;
	t_list	*node;
	t_list	*next;

	new_node = ft_create_elem(data);
	if (!*begin_list || (*cmp)(data, (*begin_list)->data) <= 0)
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
		return ;
	}
	node = *begin_list;
	next = node->next;
	while (next)
	{
		if ((*cmp)(data, next->data) < 0)
		{
			node->next = new_node;
			new_node->next = next;
			return ;
		}
		node = node->next;
		next = next->next;
	}
	node->next = new_node;
}
