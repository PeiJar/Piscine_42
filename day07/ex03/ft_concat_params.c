/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:46:55 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/09 21:01:44 by nweeks           ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	*(dest++) = '\n';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	char	*ret;
	int		summ;
	int		count;

	summ = 0;
	count = 1;
	while (count < argc)
		summ += ft_strlen(argv[count++]);
	count = 1;
	str = malloc((summ) * sizeof(char));
	if (!str)
		return (NULL);
	ret = str;
	while (count < argc)
		str = ft_strcpy(str, argv[count++]);
	*(str - 1) = 0;
	return (ret);
}
