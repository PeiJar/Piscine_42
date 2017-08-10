/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:48:35 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/10 16:32:08 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_head.h"
#include "ft_opp.h"

#define ERROR_DIV "Stop : division by zero"
#define ERROR_MOD "Stop : modulo by zero"
#define INVALID_ARG "error : only [ + - * / % ] are accepted."
#define ERROR_MSG "error : only [ + - * / % ] are accepted."

long long int	ft_usage(long long int a, long long int b)
{
	(void)a;
	(void)b;
	write(1, ERROR_MSG, sizeof(ERROR_MSG));
	return (1);
}

void			ft_putnbr(long long int nbr)
{
	char	c;

	c = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

long long int	ft_atoi(char *str)
{
	long long int	nbr;
	int				neg;

	neg = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		++str;
	if (*str == '+' || *str == '-')
		neg = *str++;
	nbr = 0;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *str++ - 48;
	return ((neg == '-') ? -nbr : nbr);
}

int				main(int argc, char **argv)
{
	if (argv[2][0] == '+' && argc == 4)
		ft_putnbr(g_opptab[0].func(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '-' && argc == 4)
		ft_putnbr(g_opptab[1].func(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '*' && argc == 4)
		ft_putnbr(g_opptab[2].func(ft_atoi(argv[1]), ft_atoi(argv[3])));
	else if (argv[2][0] == '/' && argc == 4)
	{
		if (ft_atoi(argv[3]) == 0)
			write(1, ERROR_DIV, sizeof(ERROR_DIV));
		else
			ft_putnbr(g_opptab[3].func(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	else if (argv[2][0] == '%' && argc == 4)
	{
		if (ft_atoi(argv[3]) == 0)
			write(1, ERROR_MOD, sizeof(ERROR_MOD));
		else
			ft_putnbr(g_opptab[4].func(ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	else if (argc == 4)
		write(1, INVALID_ARG, sizeof(INVALID_ARG));
	if (argc == 4)
		write(1, "\n", 1);
	return ((argc == 4) ? 0 : 1);
}
