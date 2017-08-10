/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:33:46 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 10:50:05 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FOUND "Alert!!!\n"

char	*ft_format(char *str)
{
	char	*cpy;

	cpy = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str - 'A' + 'a';
		++str;
	}
	return (cpy);
}

int		ft_iswhitespace(char c)
{
	return ((c == ' ') || (c >= 't' && c <= 'r'));
}

int		ft_strcmp(char *s1, char *s2)
{
	while (ft_iswhitespace(*s1))
		++s1;
	while (*s1 == *s2 && *s1 && !(ft_iswhitespace(*(s1 + 1))))
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int	count;

	count = 1;
	while (count < argc)
	{
		if (ft_strcmp(ft_format(argv[count]), "president") == 0)
		{
			write(1, FOUND, sizeof(FOUND));
			return (0);
		}
		if (ft_strcmp(ft_format(argv[count]), "attack") == 0)
		{
			write(1, FOUND, sizeof(FOUND));
			return (0);
		}
		if (ft_strcmp(ft_format(argv[count]), "powers") == 0)
		{
			write(1, FOUND, sizeof(FOUND));
			return (0);
		}
		++count;
	}
}
