/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 14:25:49 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 14:51:10 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int n)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_putchar('-');
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	count;
	int	i;

	count = 0;
	while (par[count].str)
	{
		ft_putstr(par[count].str);
		ft_putnbr(par[count].size_param);
		ft_putchar('\n');
		i = 0;
		while (par[count].tab[i])
			ft_putstr(par[count].tab[i++]);
		++count;
	}
}
