/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 10:44:34 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/08 09:06:02 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_check_base2(char *base)
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

void	ft_putnbr_base(int nbr, char *base)
{
	int taille;

	taille = ft_check_base2(base);
	if (!taille)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / taille), base);
		ft_putnbr_base(-(nbr % taille), base);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > taille)
	{
		ft_putnbr_base(nbr / taille, base);
		ft_putnbr_base(nbr % taille, base);
	}
	if (nbr < taille && nbr >= 0)
		ft_putchar(base[nbr % taille]);
}
