/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:11:51 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 14:43:24 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ULTIMATE_FIGHT_H
# define FT_ULTIMATE_FIGHT_H
# define SIZE 15
# define KICK 0
# define KICK1 1
# define KICK2 2
# define KICK3 3
# define KICK4 4
# define KICK5 5
# define KICK6 6
# define KICK7 7
# define KICK8 8
# define KICK9 9
# define KICK10 10
# define KICK11 11
# define KICK12 12
# define HEADBUTT 14
# define PUNCH 13

typedef struct	s_perso
{
	char		*name;
	double		life;
	int			age;
	int			profession;
}				t_perso;

typedef struct	s_coups
{
	int			degat;
	char		print[100];
}				t_coups;

t_coups	g_coups[] =
{
	{15, "judo kick\0"},
	{13, "un coup de type 1\0"},
	{3, "un coup de second type\0"},
	{18, "un coup du 3eme type\0"},
	{9, "un coup de type 4\0"},
	{11, "un coup de 5eme type\0"},
	{13, "un coup de sixieme type\0"},
	{8, "un coup de type 7\0"},
	{6, "un tit coup\0"},
	{11, "un coup de type 9\0"},
	{9, "un coup de type 10\0"},
	{18, "un coup qui fait trop mal\0"},
	{10, "un coup du 12eme type\0"},
	{5, "judo punch\0"},
	{20, "judo headbutt\0"}
};

void			ft_fight(t_perso *p1, t_perso *p2, int coup);

#endif
