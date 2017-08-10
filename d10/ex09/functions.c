/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 17:12:31 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/10 16:31:44 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long long int	ft_add(long long int a, long long int b)
{
	return (a + b);
}

long long int	ft_sub(long long int a, long long int b)
{
	return (a - b);
}

long long int	ft_mul(long long int a, long long int b)
{
	return (a * b);
}

long long int	ft_div(long long int a, long long int b)
{
	return (a / b);
}

long long int	ft_mod(long long int a, long long int b)
{
	return (a % b);
}
