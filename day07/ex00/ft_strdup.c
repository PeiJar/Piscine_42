/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:22:27 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/08 19:35:05 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str++))
		++count;
	return (count + 1);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	char	*ret;

	cpy = malloc(ft_strlen(src) * sizeof(char));
	if (!cpy)
		return (NULL);
	ret = cpy;
	while (*src)
		*(cpy++) = *(src++);
	*cpy = 0;
	return (ret);
}
