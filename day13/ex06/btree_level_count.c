/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:32:58 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/16 09:14:29 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	max(int a, int b)
{
	return ((a > b) ? a : b);
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (1 + max(btree_level_count(root->left),
				btree_level_count(root->right)));
}
