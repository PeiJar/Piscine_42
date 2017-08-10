/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 08:51:14 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 19:05:16 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*new;
	int		count;

	count = -1;
	head = 0;
	while (++count < ac)
	{
		new = ft_create_elem(av[count]);
		new->next = head;
		head = new;
	}
	return (head);
}
