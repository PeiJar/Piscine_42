/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 08:55:27 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/13 12:36:02 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*node;
	t_list	*next;

	node = *begin_list;
	while (node != 0)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*begin_list = 0;
}
