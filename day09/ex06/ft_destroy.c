/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:28:55 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 11:20:36 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int	count;
	int	count2;

	while (factory[count])
	{
		count2 = 0;
		while (factory[count][count2])
			free(factory[count][count2++]);
		free(factory[count++]);
	}
	free(factory);
}
