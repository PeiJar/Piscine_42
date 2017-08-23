/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 23:58:04 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/21 00:03:10 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	char	*str = av[1];
	while (str[i])
	{
		int repeat;

		if (str[i] >= 'a' && str[i] <= 'z')
			repeat = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			repeat = str[i] - 'A' + 1;
		else
			repeat = 1;
		int j = 0;
		while (j++ < repeat)
			ft_putchar(str[i]);
		++i;
	}
	ft_putchar('\n');
}
