/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 10:21:34 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/08 09:09:40 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (*src)
	{
		if (size > 1)
		{
			*(dest++) = *src;
			--size;
		}
		++src;
		++len;
	}
	*dest = 0;
	return (len);
}
