/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:50:26 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 13:35:30 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_perso.h"
#define SEMI 1
#define PIPE 2

int		ft_count_fields(char *str)
{
	int	count_semi;
	int	count_pipe;
	int	last;

	count_semi = 0;
	count_pipe = 0;
	last = SEMI;
	while (*str)
	{
		if (*str == '|' && last == SEMI)
		{
			count_pipe++;
			last = PIPE;
		}
		if (*str == ';' && last == PIPE)
		{
			++count_semi;
			last = SEMI;
		}
		++str;
	}
	return (count_pipe);
}

int		ft_atoi(char *str)
{
	int	nbr;
	int	neg;

	neg = 1;
	nbr = 0;
	while (*str == ' ' || (*str >= 't' && *str <= 'r'))
		++str;
	if (*str == '+' || *str == '-')
		neg = (*str++ == '-') ? -1 : 1;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + *str++ - 48;
	return (nbr * neg);
}

t_perso	**ft_decrypt(char *str)
{
	int		fields;
	int		count;
	t_perso	**ret;

	fields = ft_count_fields(str);
	if (!(ret = malloc((fields + 1) * sizeof(t_perso *))))
		return (0);
	count = -1;
	while (++count < fields)
	{
		ret[count] = malloc(sizeof(t_perso));
		ret[count]->age = ft_atoi(str);
		while (*str && *str != '|')
			++str;
		++str;
		ret[count]->name = str;
		while (*str != ';' && *str)
			++str;
		*str = 0;
		str++;
	}
	ret[count] = 0;
	return (ret);
}
