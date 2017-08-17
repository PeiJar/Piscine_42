/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:18:38 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/17 16:55:31 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "head.h"

int	ft_write(int argc, char **argv, int option)
{
	int		fd;
	int		write_fd;
	int		count;
	char	c;
	int		opened_one;

	count = option ? 1 : 2;
	opened_one = 0;
	write_fd = open("srcs/to_write", O_WRONLY | O_TRUNC);
	while (count < argc)
	{
		fd = ft_get_fd(argv[count++]);
		if (fd == -1)
			continue ;
		opened_one = 1;
		while ((read(fd, &c, 1)))
			write(write_fd, &c, 1);
		close(fd);
	}
	return (opened_one);
}

int	main(int argc, char **argv)
{
	int	show_char;
	int	fd;
	int	err;

	if (argc < 2)
		return (1);
	show_char = ft_strcmp("-C", argv[1]);
	err = ft_write(argc, argv, show_char);
	if (!err)
	{
		ft_putstr("hexdump: ", 2);
		ft_putstr(argv[argc - 1], 2);
		ft_putstr(": Bad file descriptor\n", 2);
		return (1);
	}
	fd = open("srcs/to_write", O_RDONLY);
	ft_start_hex_dump(fd, 0, show_char);
	return (0);
}
