/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:25:12 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/21 00:30:12 by nweeks           ###   ########.fr       */
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
	char	*str = argv[1];
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
		++i;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		ft_putchar(str[i++]);
	ft_putchar('\n');
	return (0);
}
