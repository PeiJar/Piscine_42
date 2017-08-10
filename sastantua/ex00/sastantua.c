/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 13:14:56 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/06 14:45:17 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_calculer_base(int size)
{
	int	width;
	int	etage;
	int	line;

	etage = 1;
	width = 1;
	while (etage <= size)
	{
		line = 0;
		while (line++ < etage + 2)
			width += 2;
		width += 4 + 2 * ((etage - 2) / 2);
		++etage;
	}
	return (width);
}

void	ft_print_spaces(int spaces)
{
	while (spaces--)
		ft_putchar(' ');
}

void	print_line(int width, int line, int door, int size)
{
	int count;
	int size_door;

	count = 0;
	size_door = (size % 2 == 0) ? size - 1 : size;
	while (count < width)
	{
		if (count == 0)
			ft_putchar('/');
		else if (count == width - 1)
			ft_putchar('\\');
		else if (door && line > 2 + size - size_door &&
				count <= width / 2 + size_door / 2 &&
				count >= width / 2 - size_door / 2)
			if (size >= 5 && count == width / 2 + size_door / 2 - 1
					&& (2 + size - size_door / 2 == line))
				ft_putchar('$');
			else
				ft_putchar('|');
		else
			ft_putchar('*');
		++count;
	}
}

void	sastantua(int size)
{
	int etage;
	int taille_base;
	int width;
	int nb_lignes;
	int cur_line;

	nb_lignes = 3;
	width = 1;
	etage = 1;
	taille_base = ft_calculer_base(size);
	while (etage <= size)
	{
		cur_line = 0;
		while (cur_line++ < nb_lignes)
		{
			width += 2;
			ft_print_spaces((taille_base - width) / 2 - 2);
			print_line(width, cur_line, size == etage, size);
			ft_putchar('\n');
		}
		width += 4 + 2 * ((etage - 1) / 2);
		++etage;
		++nb_lignes;
	}
}
