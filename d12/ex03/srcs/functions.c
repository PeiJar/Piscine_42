/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:37:11 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/17 16:57:26 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "head.h"

int		ft_get_fd(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("hexdump: ", 2);
		ft_putstr(file, 2);
		ft_putstr(": No such file or directory\n", 2);
	}
	return (fd);
}

void	ft_print_hex(char c)
{
	if (c > 9)
		ft_putchar(c - 10 + 'a');
	else
		ft_putchar(c + '0');
}

void	ft_print_asci(char *str, int bytes_read, int option)
{
	int	i;

	if (option != 0)
		return ;
	ft_putstr("  |", 1);
	i = -1;
	while (++i < bytes_read)
	{
		if (str[i] >= ' ' && str[i] <= '~')
			ft_putchar(str[i]);
		else
			ft_putchar('.');
	}
	ft_putchar('|');
}

void	ft_print_line(char *str, int bytes_read, int option)
{
	int	i;

	i = -1;
	while (++i < bytes_read)
	{
		if (i)
			ft_putchar(' ');
		ft_print_hex(str[i] / 16);
		ft_print_hex(str[i] % 16);
		if (i == 7 && !option)
			ft_putchar(' ');
	}
	while (++i < 16)
	{
		ft_putstr("   ", 1);
		if (i == 7 && !option)
			ft_putchar(' ');
		if (i == 15)
			ft_putstr("   ", 1);
	}
}

int		ft_start_hex_dump(int fd, int cur_offest, int option)
{
	char	*str;
	int		bytes_read;
	char	*prev;

	prev = malloc(16 * sizeof(char));
	str = malloc(16 * sizeof(char));
	while ((bytes_read = read(fd, str, 16)))
	{
		if (bytes_read == 16 && prev != NULL && ft_specialcmp(str, prev) == 0)
		{
			ft_same(fd, str, &cur_offest, &bytes_read);
		}
		ft_print_offset((option) ? 7 : 8, cur_offest);
		ft_putstr((option) ? " " : "  ", 1);
		ft_print_line(str, bytes_read, option);
		ft_print_asci(str, bytes_read, option);
		free(prev);
		prev = ft_strdup(str);
		ft_putchar('\n');
		cur_offest += bytes_read;
	}
	ft_print_offset(option ? 7 : 8, cur_offest);
	ft_putchar('\n');
	return (cur_offest);
}
