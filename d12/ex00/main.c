/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:34:27 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/17 09:49:38 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define NO_ARGV "File name missing.\n"
#define TOO_MANY "Too many arguments.\n"

void	ft_showfile(char *file)
{
	int		fd;
	char	c;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &c, 1) == 1)
		write(1, &c, 1);
	close(fd);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, NO_ARGV, sizeof(NO_ARGV));
		return (1);
	}
	if (argc > 2)
	{
		write(2, TOO_MANY, sizeof(TOO_MANY));
		return (1);
	}
	ft_showfile(argv[1]);
}
