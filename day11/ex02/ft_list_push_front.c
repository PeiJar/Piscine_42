/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 08:46:47 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 14:18:41 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	node = ft_create_elem(data);
	node->next = *begin_list;
	*begin_list = node;
}
