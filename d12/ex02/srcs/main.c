/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 10:18:30 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/17 10:52:07 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include "head.h"

int		ft_sizeof_file(char *file)
{
	size_t	size;
	char	c;
	int		fd;

	fd = open(file, O_RDONLY);
	size = 0;
	if (fd == -1)
	{
		ft_putstr("tail: ", 2);
		ft_putstr(file, 2);
		ft_putstr(": No such file or directory\n", 2);
		return (-1);
	}
	while (read(fd, &c, 1))
		++size;
	close(fd);
	return (size);
}

void	ft_print_file(char *file, int size, int to_print)
{
	int		cursor;
	int		fd;
	char	c;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return ;
	cursor = 0;
	while (cursor < size)
	{
		read(fd, &c, 1);
		if (cursor >= size - to_print)
			write(1, &c, 1);
		++cursor;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	to_print;
	int	size;

	if (argc < 4)
		return (1);
	i = 2;
	to_print = ft_atoi(argv[2]);
	while (++i < argc)
	{
		size = ft_sizeof_file(argv[i]);
		if (size == -1)
			continue ;
		if (argc > 4)
		{
			ft_putstr("==> ", 1);
			ft_putstr(argv[i], 1);
			ft_putstr(" <==\n", 1);
		}
		ft_print_file(argv[i], size, to_print);
	}
}
