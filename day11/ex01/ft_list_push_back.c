/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 08:43:56 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 13:17:32 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;

	node = *begin_list;
	if (!node)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (node->next)
		node = node->next;
	node->next = ft_create_elem(data);
}
