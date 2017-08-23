/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:08:33 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/21 00:14:51 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return i;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	if (ft_strlen(argv[2]) != 1 && ft_strlen(argv[3]) != 1)
	{
		ft_putchar('\n');
		return (0);
	}
	char to_replace = argv[2][0];
	char replace_by = argv[3][0];
	char *str = argv[1];
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == to_replace)
			ft_putchar(replace_by);
		else
			ft_putchar(str[i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
