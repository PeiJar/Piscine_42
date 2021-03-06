/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:32:30 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/21 00:35:35 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int nbr = 0;
	int neg = 1;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		++str;
	if (*str == '+' || *str == '-')
		neg = (*str++ == '-') ? -1 : 1;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *str++ - '0';
	return (nbr * neg);
}
