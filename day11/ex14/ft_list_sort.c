/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:03:04 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 18:06:10 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int	count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		++count;
	}
	return (count);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		size;
	void	*tmp;
	t_list	*node;
	t_list	*next;

	node = *begin_list;
	size = ft_list_size(*begin_list);
	while (size--)
	{
		node = *begin_list;
		next = node->next;
		while (node && next)
		{
			if (cmp(node->data, next->data) > 0)
			{
				tmp = node->data;
				node->data = next->data;
				next->data = tmp;
			}
			node = node->next;
			next = next->next;
		}
	}
}
