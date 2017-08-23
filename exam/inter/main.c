/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:49:07 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/22 12:11:24 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	char *s1 = av[1];
	char *s2 = av[2];
	int i = 0;
	int j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j] && s2[j] != s1[j])
			++j;
		if (s1[i] == s2[j])
		{
			ft_putchar(s1[i]);
			s2[j] = 5;
		}
		++i;
	}
	ft_putchar('\n');
}
