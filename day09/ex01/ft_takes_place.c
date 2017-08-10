/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 17:44:58 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 11:50:15 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_am_pm(int hour)
{
	if (hour == 24)
		hour = 0;
	if (hour >= 0 && hour <= 11)
		write(1, "A.M.", 4);
	else
		write(1, "P.M.", 4);
}

void	ft_write_hour(int hour)
{
	char	a;
	char	b;

	if (hour % 12 == 0)
	{
		write(1, "12", 2);
	}
	else
	{
		a = (hour % 12) / 10 + '0';
		b = (hour % 12) % 10 + '0';
		write(1, &a, 1);
		write(1, &b, 1);
	}
	write(1, ".00 ", 4);
}

void	ft_takes_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	ft_write_hour(hour);
	ft_write_am_pm(hour);
	write(1, " AND ", 5);
	ft_write_hour(hour + 1);
	ft_write_am_pm((hour + 1));
	write(1, "\n", 1);
}
