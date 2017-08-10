/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 09:55:33 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/08 09:16:13 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*cpy;

	cpy = dest;
	while (*dest)
		++dest;
	while (*src)
		*(dest++) = *(src++);
	*dest = 0;
	return (cpy);
}