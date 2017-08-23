/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 00:35:50 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/21 00:39:18 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *str = malloc( (ft_strlen(src) + 1)  * sizeof(char));

	int i = -1;
	while (src[++i])
		str[i] = src[i];
	str[i] = 0;
	return str;
}
