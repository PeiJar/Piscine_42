/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:25:03 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/09 14:43:34 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = -1;
	if (max - min <= 0)
		return (NULL);
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (0);
	while (++i < max - min)
		tab[i] = min + i;
	return (tab);
}
