/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_head.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:57:52 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/10 16:32:26 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEAD_H
# define FT_HEAD_H

typedef struct		s_opp
{
	char			*type;
	long long int	(*func)(long long int, long long int);
}					t_opp;

long long int		ft_add(long long int a, long long int b);
long long int		ft_sub(long long int a, long long int b);
long long int		ft_mul(long long int a, long long int b);
long long int		ft_div(long long int a, long long int b);
long long int		ft_usage(long long int a, long long int b);
long long int		ft_mod(long long int a, long long int b);
#endif
