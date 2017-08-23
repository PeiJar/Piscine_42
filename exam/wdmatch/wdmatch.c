/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 13:40:22 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/19 13:51:22 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	is_in_array(char c, char *str, int cursor)
{
	while (str[++cursor])
		if (c == str[cursor])
			break ;
	return cursor;
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	int cursor = -1;
	for (int i = 0; argv[1][i]; ++i)
	{
		cursor = is_in_array(argv[1][i], argv[2], cursor);
		if (!argv[2][cursor])
		{
			write(1, "\n", 1);
			return 1;
		}
	}
	ft_putstr(argv[1]);
}
