/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:11:51 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 14:12:59 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H
# define KICK 15
# define PUNCH 5
# define HEADBUTT 20

typedef struct	s_perso
{
	char		*name;
	double		life;
	int			age;
	int			profession;
}				t_perso;

void			ft_fight(t_perso *p1, t_perso *p2, int type);

#endif
