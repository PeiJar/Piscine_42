/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 18:39:54 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/03 13:33:46 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_fill_utility(int prev, int index, int n, int *tab)
{
	int i;

	if (index >= n + 1)
	{
		if (tab[index - 1] != n - 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		i = 1;
		while (i <= n)
			ft_putchar(tab[i++] + '0');
	}
	if (index > n)
		return ;
	if (prev > 9 - (n - index))
		return ;
	tab[index] = prev;
	ft_fill_utility(prev + 1, index + 1, n, tab);
	ft_fill_utility(prev + 1, index, n, tab);
}

void	ft_print_combn(int n)
{
	int numbers[10];
	int a;

	a = 0;
	while (a <= n)
		numbers[a++] = 0;
	ft_fill_utility(0, 1, n, numbers);
}
