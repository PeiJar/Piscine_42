/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:48:35 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/16 11:43:50 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_head.h"
#include "ft_opp.h"

void		ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	write(1, "0", 1);
}

int			main(int argc, char **argv)
{
	int	count;
	int	a;
	int	b;

	if (argc != 4)
		return (1);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	count = 0;
	while (count < 5)
	{
		if (ft_strcmp(argv[2], g_opptab[count].type) == 0)
			break ;
		count++;
	}
	g_opptab[count].func(a, b);
	write(1, "\n", 1);
	return (0);
}
