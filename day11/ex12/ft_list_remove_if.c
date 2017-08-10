/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 15:21:22 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 13:56:27 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*node;
	t_list	*prev;

	node = *begin_list;
	prev = 0;
	while (node)
	{
		if ((*cmp)(data_ref, node->data) == 0)
		{
			if (!prev)
				*begin_list = (*begin_list)->next;
			else
			{
				prev->next = node->next;
				free(node);
				node = prev;
			}
		}
		prev = node;
		node = node->next;
	}
}
