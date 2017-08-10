/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:39:46 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/05 16:06:09 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	count;

	if (argc < 1)
		return (1);
	count = 0;
	while (argv[0][count])
		ft_putchar(argv[0][count++]);
	ft_putchar('\n');
	return (0);
}
