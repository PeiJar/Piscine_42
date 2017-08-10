/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:57:52 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/16 11:46:04 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H

typedef struct		s_opp
{
	char			type[100];
	void			(*func)();
}					t_opp;

void				ft_putnbr(int nbr);
int					ft_strcmp(char *s1, char *s2);
int					ft_atoi(char *str);
void				ft_putnbr(int n);
void				ft_add(int a, int b);
void				ft_sub(int a, int b);
void				ft_mul(int a, int b);
void				ft_div(int a, int b);
void				ft_usage(int a, int b);
void				ft_mod(int a, int b);
void				ft_putstr(char *str);
#endif
