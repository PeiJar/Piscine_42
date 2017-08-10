/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 19:42:41 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/16 09:33:51 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_btree.h"

t_queue	*ft_create(t_btree *new_node)
{
	t_queue	*new;

	new = malloc(sizeof(t_queue));
	new->node = new_node;
	new->next = NULL;
	return (new);
}

void	ft_push(t_queue **root, t_btree *new_node)
{
	t_queue	*node;

	node = *root;
	if (!node)
	{
		*root = ft_create(new_node);
		return ;
	}
	while (node->next)
		node = node->next;
	node->next = ft_create(new_node);
}

t_btree	*ft_pop(t_queue **root)
{
	t_btree	*item;
	t_queue	*to_free;

	to_free = *root;
	item = (*root)->node;
	*root = to_free->next;
	free(to_free);
	return (item);
}

void	recurse(void (*applyf)(void *item, int current_level,
			int is_first_elem), t_queue *queue, int etage)
{
	int		i;
	t_btree	*node;
	t_queue	*new_queue;

	i = 0;
	new_queue = NULL;
	while (queue)
	{
		node = ft_pop(&queue);
		if (node->left != NULL)
			ft_push(&new_queue, node->left);
		if (node->right != NULL)
			ft_push(&new_queue, node->right);
		applyf(node->item, etage, (i == 0) ? 1 : 0);
		++i;
	}
	free(queue);
	if (new_queue != NULL)
		recurse(applyf, new_queue, etage + 1);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	t_queue	*queue;

	queue = NULL;
	ft_push(&queue, root);
	recurse(applyf, queue, 0);
}
