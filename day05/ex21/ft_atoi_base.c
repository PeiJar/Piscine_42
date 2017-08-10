/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 10:44:34 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/08 09:04:21 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check_base(char *base)
{
	int		count;
	char	*cpy;

	cpy = base;
	count = 0;
	if (!*base || !*(base + 1))
		return (0);
	while (*base && *base != '-' && *base != '+' &&
			*base >= ' ' && *base <= '~')
	{
		cpy = base + 1;
		while (*cpy && *cpy != *base)
			++cpy;
		if (*cpy)
			return (0);
		count++;
		++base;
	}
	if (*base)
		return (0);
	return (count);
}

int		ft_find_index(char *base, char c)
{
	int index;

	index = 0;
	while (*base && *base != c)
	{
		++base;
		++index;
	}
	if (!*base)
		return (-1);
	return (index);
}

int		ft_atoi_base(char *str, char *base)
{
	int	size_base;
	int	nb;
	int	index;
	int	sign;

	sign = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		++str;
	if (*str == '+' || *str == '-')
		sign = *(str++);
	nb = 0;
	size_base = ft_check_base(base);
	if (!size_base)
		return (0);
	while (*str)
	{
		index = ft_find_index(base, *(str++));
		if (index == -1)
			return (0);
		nb = nb * size_base + index;
	}
	if (sign == '-')
		return (-nb);
	return (nb);
}
