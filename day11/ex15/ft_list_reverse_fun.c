/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 14:34:55 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 14:20:41 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	count;

	count = 0;
	while (begin_list)
	{
		if (count == nbr)
			return (begin_list);
		++count;
		begin_list = begin_list->next;
	}
	return (0);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		start;
	int		end;
	void	*swap;

	start = 0;
	end = ft_list_size(begin_list) - 1;
	while (start < end)
	{
		swap = ft_list_at(begin_list, start)->data;
		ft_list_at(begin_list, start++)->data = ft_list_at(begin_list,
				end)->data;
		ft_list_at(begin_list, end--)->data = swap;
	}
}
