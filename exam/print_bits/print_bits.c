/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 20:15:25 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/24 20:25:42 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n, int digits)
{
	if (digits == 0)
		return ;
	putnbr(n / 2, digits - 1);
	ft_putchar('0' + n % 2);
}

void	print_bits(unsigned char c)
{
	putnbr(c, 8);
}
