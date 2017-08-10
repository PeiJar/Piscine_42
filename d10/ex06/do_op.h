/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:52:50 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/10 16:00:32 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

long long int	ft_add(long long int a, long long int b);
long long int	ft_substract(long long int a, long long int b);
long long int	ft_multiply(long long int a, long long int b);
long long int	ft_divide(long long int a, long long int b);
long long int	ft_modulo(long long int a, long long int b);

long long int(*g_calculs[5])(long long int a, long long int b) = {
	&ft_add,
	&ft_substract,
	&ft_multiply,
	&ft_divide,
	&ft_modulo
};

#endif
