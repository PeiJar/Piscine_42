/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:40:07 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 09:13:53 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int	*ret;
	int	i;

	i = -1;
	if (!(ret = malloc(lenght * sizeof(int))))
		return (NULL);
	while (++i < lenght)
		ret[i] = (*f)(tab[i]);
	return (ret);
}
