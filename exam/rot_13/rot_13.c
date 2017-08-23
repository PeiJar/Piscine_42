/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:20:11 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/21 00:24:07 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c, 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	char	*str = argv[1];
	for(int i = 0; str[i]; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar( (str[i] - 'a' + 13) % 26 + 'a'  );
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar( (str[i] - 'A' + 13) % 26 + 'A'  );
		else
			ft_putchar(str[i]);
	}
	ft_putchar('\n');
}
