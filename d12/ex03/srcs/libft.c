/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:06:14 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/17 14:34:12 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "head.h"

char	*ft_strdup(char *str)
{
	int		count;
	char	*ret;

	count = -1;
	ret = malloc(16 * sizeof(char));
	while (++count < 16)
		ret[count] = str[count];
	return (ret);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	return ((*s1 == *s2 && *s1) ? ft_strcmp(s1 + 1, s2 + 1) : *s1 - *s2);
}

void	ft_putstr(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_print_offset(int digits, int number)
{
	if (digits == 0)
		return ;
	ft_print_offset(digits - 1, number / 16);
	ft_print_hex(number % 16);
}
