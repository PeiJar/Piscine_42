/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 19:48:46 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 14:51:25 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str++))
		++count;
	return (count);
}

char				*ft_strcpy(char *str)
{
	char *cpy;
	char *ret;

	if (!(cpy = malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (NULL);
	ret = cpy;
	while (*str)
		*(cpy++) = *(str++);
	*cpy = 0;
	return (ret);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*ret;
	int			count;

	count = 0;
	if (!(ret = malloc((ac + 1) * sizeof(*ret) + 1)))
		return (NULL);
	while (count < ac)
	{
		ret[count].size_param = ft_strlen(av[count]);
		ret[count].str = av[count];
		ret[count].tab = ft_split_whitespaces(av[count]);
		ret[count].copy = ft_strcpy(av[count]);
		++count;
	}
	ret[count].str = 0;
	return (ret);
}
