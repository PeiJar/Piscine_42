/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:34:39 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/16 10:16:27 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list && begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	if (!*begin_list1)
	{
		(*begin_list1) = begin_list2;
		return ;
	}
	ft_list_last(*begin_list1)->next = begin_list2;
}

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

void	ft_list_sort2(t_list **begin_list, int (*cmp)())
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

void	ft_sorted_list_merge(t_list **begin_list1,
		t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort2(begin_list1, cmp);
}
