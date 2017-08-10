/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 10:04:05 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/08 09:10:35 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str++))
		++count;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	n;
	char			*d;
	char			*s;

	d = dest;
	s = src;
	n = size;
	while (n != 0 && *d && n--)
		++d;
	len_dest = d - dest;
	n = size - len_dest;
	if (n == 0)
		return (len_dest + ft_strlen(src));
	while (*s)
	{
		if (n != 1)
		{
			*(d++) = *s;
			--n;
		}
		++s;
	}
	*d = 0;
	return (len_dest + (s - src));
}
