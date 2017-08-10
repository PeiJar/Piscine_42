/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:51:07 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 11:43:55 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		++count;
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}

char	*ft_join(char **tab, char *sep)
{
	int		summ;
	int		size_sep;
	char	*ret;
	char	*cpy;
	int		count;

	summ = 0;
	count = 0;
	size_sep = ft_strlen(sep);
	while (tab[count])
		summ += ft_strlen(tab[count++]) + size_sep;
	summ -= (size_sep - 1);
	if (!(ret = malloc(summ * sizeof(char))))
		return (NULL);
	cpy = ret;
	count = 0;
	while (tab[count])
	{
		cpy = ft_strcpy(cpy, tab[count++]);
		if (tab[count])
			cpy = ft_strcpy(cpy, sep);
	}
	*cpy = 0;
	return (ret);
}
