/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 16:49:14 by fbabin            #+#    #+#             */
/*   Updated: 2017/08/03 13:41:15 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_CORR_H
# define LIB_CORR_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	start_corr(int ex)
{
	printf("\n---- CORRECTION OF EXERCICE %d ----\n\n", ex);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_strIn(char *str, char **argv)
{
	int		i;

	i = 0;
	while(argv[i])
	{
		if(ft_strcmp(str, argv[i]) == 0)
			return(1);
		i++;	
	}
	return(0);
}

int		ft_iterative_factorial_corr(int nb)
{
	int		i;

	i = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		i = i * (nb - 1);
		nb--;
	}
	return (i);
}

int		ft_iterative_power_corr(int nb, int power)
{
	int i;

	i = nb;
	if (power < 0 || nb == 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		i *= nb;
		power--;
	}
	return (i);
}

int		ft_fibonacci_corr(int index)
{
	if (index <= 1 && index >= 0)
		return (index);
	else if (index < 0)
		return (-1);
	return (ft_fibonacci_corr(index - 2) + ft_fibonacci_corr(index - 1));
}

int		ft_sqrt_corr(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i != nb && i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

int		ft_is_prime_corr(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while ((nb % i) != 0 && i <= (nb / 2) + 1)
		i++;
	if (i <= (nb / 2))
		return (0);
	return (1);
}

int		ft_find_next_prime_corr(int nb)
{
	while (ft_is_prime_corr(nb) == 0)
		nb++;
	return (nb);
}

void	showTab(int tab[8], int size)
{
	int		i;

	i = 0;
	while(i < size)
		ft_putchar(tab[i++]+48);
	ft_putchar('\n');
}

int		ft_isCorrect(int tab[8], int pos)
{
	int		i;

	i = 0;
	while(i < pos && pos > 0)
	{
		if (tab[i] == tab[pos] || (tab[i]+(pos-i)) == tab[pos]
				|| (tab[i]-(pos-i)) == tab[pos])
			return(0);
		i++;
	}
	return(1);
}

void	ft_findSol(int tab[8], int pos)
{
	int		i;

	if (pos == 8)
		showTab(tab, 8);
	else
	{
		i = 0;
		while(++i <= 8)
		{
			tab[pos]=i;
			if(ft_isCorrect(tab, pos))
				ft_findSol(tab, pos+1);
		}
	}
}

void	ft_eight_queens_puzzle_2_corr(void)
{
	int		tab[8];
	int		pos;

	pos = 0;
	ft_findSol(tab, pos);
}

#endif

