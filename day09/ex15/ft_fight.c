/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:13:14 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 14:13:02 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_fight.h"

#define FIRST_PART " does a judo "

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_fight(t_perso *p1, t_perso *p2, int attack)
{
	if (p1->life <= 0 || p2->life <= 0)
		return ;
	ft_putstr(p1->name);
	write(1, FIRST_PART, sizeof(FIRST_PART));
	p2->life -= attack;
	if (attack == KICK)
		write(1, "kick on ", 8);
	if (attack == PUNCH)
		write(1, "punch on ", 9);
	if (attack == HEADBUTT)
		write(1, "headbutt on ", 12);
	ft_putstr(p2->name);
	write(1, ".\n", 2);
	if (p2->life <= 0)
	{
		ft_putstr(p2->name);
		ft_putstr(" is dead\n");
	}
}
