/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 17:43:57 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/08 09:10:00 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_get_hex(unsigned int n)
{
	if (n < 10)
		return (n + '0');
	return (n - 10 + 'a');
}

void	ft_print_line(int nbr, int digits)
{
	if (digits == 0)
		return ;
	ft_print_line(nbr / 16, digits - 1);
	ft_putchar(ft_get_hex(nbr % 16));
	if (digits == 8)
	{
		ft_putchar(':');
		ft_putchar(' ');
	}
}

void	ft_print_string(unsigned char *str, int left)
{
	int	i;

	i = 0;
	while (i < left && i < 16)
	{
		ft_putchar(ft_get_hex(str[i] / 16));
		ft_putchar(ft_get_hex(str[i] % 16));
		if (i % 2)
			ft_putchar(' ');
		++i;
	}
	while (i < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if (i % 2)
			ft_putchar(' ');
		++i;
	}
}

void	ft_putstr_special(unsigned char *str, int left)
{
	int count;

	count = 0;
	while (count < 16 && count < left)
	{
		if (str[count] >= ' ' && str[count] <= '~')
			ft_putchar(str[count]);
		else
			ft_putchar('.');
		++count;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	count;
	unsigned char	*str;

	str = (unsigned char*)addr;
	count = 0;
	while (count < size)
	{
		ft_print_line(count, 8);
		ft_print_string(str, size - count);
		ft_putchar(' ');
		ft_putstr_special(str, size - count);
		ft_putchar('\n');
		str += 16;
		count += 16;
	}
	return (addr);
}
