/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:34:27 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/17 09:47:20 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include "header.h"

int		ft_showfile(char *file)
{
	int		fd;
	char	c;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("cat: ", 2);
		ft_putstr(file, 2);
		ft_putstr(": No such file or directory\n", 2);
		return (1);
	}
	while (read(fd, &c, 1) == 1)
		write(1, &c, 1);
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
		ft_showfile(argv[count++]);
	return (errno);
}
