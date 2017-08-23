/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 12:33:06 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/21 04:18:11 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	n = 0;

	for(int i = 0; i < 8; ++i)
	{
		n = n * 2 + octet % 2;
		n = n * 2 + octet % 2;
		octet /= 2;
	}
	return (n);
}
