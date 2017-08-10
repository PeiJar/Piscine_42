/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:40:45 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/10 09:50:18 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

void			ft_putnbr(long long int nbr)
{
	char	c;

	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + 48;
	write(1, &c, 1);
}

long long int	ft_atoi(char *str)
{
	long long int	nbr;
	long long int	neg;

	nbr = 0;
	neg = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		++str;
	if (*str == '-' || *str == '+')
		neg = (*str++ == '-') ? -1 : 1;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *(str++) - '0';
	return (nbr * neg);
}

int				main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if (argv[2][0] == '+')
		ft_putnbr((*g_calculs[0])(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '-')
		ft_putnbr((*g_calculs[1])(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '*')
	{
		ft_putnbr((*g_calculs[2])(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	if (argv[2][0] == '/')
	{
		if (!ft_atoi(argv[3]))
			write(1, "Stop : division by zero", 24);
		else
			ft_putnbr((*g_calculs[3])(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	if (argv[2][0] == '%')
	{
		if (!ft_atoi(argv[3]))
			write(1, "Stop : modulo by zero", 22);
		else
			ft_putnbr((*g_calculs[4])(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	write(1, "\n", 1);
}
