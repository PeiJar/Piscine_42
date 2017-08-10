/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 11:47:53 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/13 11:56:04 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#define ABS(n) ((n < 0) ? -(n) : (n))

int		ft_check_base_2(char *base)
{
	int		count;
	char	*cpy;

	cpy = base;
	count = 0;
	while (*base && *base != '-' && *base != '+' &&
			*base >= ' ' && *base <= '~')
	{
		cpy = base + 1;
		while (*cpy && *cpy != *base)
			++cpy;
		if (*cpy)
			return (0);
		++count;
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
	size_base = ft_check_base_2(base);
	if (size_base < 2)
		return (0);
	while (*str)
	{
		index = ft_find_index(base, *(str++));
		if (index == -1)
			break ;
		nb = nb * size_base + index;
	}
	if (sign == '-')
		return (-nb);
	return (nb);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		size_base;
	int		cp;
	int		digits;
	char	*ret;
	int		neg;

	size_base = ft_check_base_2(base);
	if (size_base < 2)
		return (NULL);
	digits = 0;
	cp = nbr;
	while (++digits && cp != 0)
		cp /= size_base;
	if (nbr < 0 && (neg = 1))
		++digits;
	if (nbr == 0)
		digits = 2;
	if (!(ret = malloc(digits * sizeof(char))))
		return (NULL);
	ret[--digits] = 0;
	while (nbr != 0 && (ret[--digits] = base[ABS(nbr % size_base)]))
		nbr /= size_base;
	if (neg)
		ret[--digits] = '-';
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*ret;

	n = ft_atoi_base(nbr, base_from);
	if (n == 0)
	{
		ret = malloc(2 * sizeof(char));
		ret[0] = base_to[0];
		ret[1] = 0;
		return (ret);
	}
	return (ft_itoa_base(n, base_to));
}
