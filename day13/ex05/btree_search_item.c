/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 18:59:44 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/17 09:02:06 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*search;

	search = NULL;
	if (root)
	{
		search = btree_search_item(root->left, data_ref, cmpf);
		if (!search && cmpf(data_ref, root->item) == 0)
			search = root->item;
		if (!search)
			search = btree_search_item(root->right, data_ref, cmpf);
	}
	return (search);
}
