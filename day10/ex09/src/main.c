/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:48:35 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/16 11:45:43 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_head.h"
#include "ft_opp.h"

void		ft_usage(int a, int b)
{
	int	i;

	(void)a;
	(void)b;
	i = 0;
	write(1, "error : only [ ", 15);
	while (i < 5)
	{
		ft_putstr(g_opptab[i++].type);
		write(1, " ", 1);
	}
	ft_putstr("] are accepted.");
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
