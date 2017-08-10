/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_fight.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 14:36:03 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 14:43:10 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ultimate_fight.h"

#define FIRST_PART " does a \0"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

void	ft_fight(t_perso *p1, t_perso *p2, int coup)
{
	if (p1->life <= 0 || p2->life <= 0)
		return ;
	ft_putstr(p1->name);
	ft_putstr(FIRST_PART);
	ft_putstr(g_coups[coup].print);
	p2->life -= g_coups[coup].degat;
	write(1, " on ", 4);
	ft_putstr(p2->name);
	write(1, ".\n", 2);
	if (p2->life <= 0)
	{
		ft_putstr(p2->name);
		ft_putstr(" is dead\n");
	}
}
