/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specialcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 13:57:52 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/17 16:57:55 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		ft_specialcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (i < 15 && s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

void	ft_same(int fd, char *str, int *offset, int *bytes_read)
{
	char	*prev;

	prev = ft_strdup(str);
	ft_putstr("*\n", 1);
	*offset += 16;
	while ((*bytes_read = read(fd, str, 16)) == 16 &&
			!ft_specialcmp(str, prev))
		*offset += 16;
}
