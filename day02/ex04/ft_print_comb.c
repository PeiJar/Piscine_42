/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 17:18:04 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/02 21:12:25 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (++a <= 7)
	{
		b = a;
		while (++b <= 8)
		{
			c = b;
			while (++c <= 9)
			{
				if (c != 2)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
			}
		}
	}
}
