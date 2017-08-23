/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:04:05 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/21 00:08:03 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i = 0;
	while (str[i] != '\0')
		++i;
	return i;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	int i = ft_strlen(argv[1]) - 1;
	while (i >= 0)
	{
		ft_putchar(argv[1][i]);
		i--;
	}
	ft_putchar('\n');
	return 0;
}
