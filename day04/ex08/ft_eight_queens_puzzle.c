/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 15:53:12 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/03 11:56:49 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check(int row, int *tab)
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

int	ft_backtrack_queen(int row, int *tab)
{
	int i;
	int total;

	total = 0;
	if (row == 8)
		return (1);
	i = 1;
	while (i <= 8)
	{
		tab[row] = i++;
		if (ft_check(row, tab))
			total += ft_backtrack_queen(row + 1, tab);
	}
	tab[row] = 0;
	return (total);
}

int	ft_eight_queens_puzzle(void)
{
	int	tableau[8];
	int i;

	i = 0;
	while (i < 8)
		tableau[i++] = 0;
	return (ft_backtrack_queen(0, tableau));
}
