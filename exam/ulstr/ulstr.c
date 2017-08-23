/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:15:27 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/21 00:19:35 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	int i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			ft_putchar(argv[1][i] - 'a' + 'A');
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			ft_putchar(argv[1][i] - 'A' + 'a');
		else
			ft_putchar(argv[1][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
