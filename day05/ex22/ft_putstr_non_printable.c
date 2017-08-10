/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 17:22:18 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/08 08:57:18 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	ft_get_hex_digit(unsigned int n)
{
	if (n < 10)
		return (n + '0');
	else
		return (n - 10 + 'a');
}

void	ft_putstr_non_printable(char *str)
{
	char c;

	c = 0;
	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			ft_putchar('\\');
			ft_putchar(ft_get_hex_digit(*str / 16));
			if (*str % 16 != 0)
				ft_putchar(ft_get_hex_digit(*str % 16));
		}
		else
			ft_putchar(*str);
		++str;
	}
}
