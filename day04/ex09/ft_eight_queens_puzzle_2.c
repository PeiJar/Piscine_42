/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 15:53:12 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/03 18:01:06 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_check(int row, int *tab)
{
	int i;

	i = 0;
	while (i < row)
	{
		if (tab[i] == tab[row])
			return (0);
		if (tab[i] == tab[row] - (row - i))
			return (0);
		if (tab[i] == tab[row] + (row - i))
			return (0);
		++i;
	}
	return (1);
}

void	ft_backtrack_queen(int row, int *tab)
{
	int i;

	if (row == 8)
	{
		i = 0;
		while (i < 8)
			ft_putchar(tab[i++] + '0');
		ft_putchar('\n');
	}
	i = 1;
	while (i <= 8)
	{
		tab[row] = i++;
		if (ft_check(row, tab))
			ft_backtrack_queen(row + 1, tab);
	}
	tab[row] = 0;
}

void	ft_eight_queens_puzzle_2(void)
{
	int	tableau[8];
	int i;

	i = 0;
	while (i < 8)
		tableau[i++] = 0;
	ft_backtrack_queen(0, tableau);
}
