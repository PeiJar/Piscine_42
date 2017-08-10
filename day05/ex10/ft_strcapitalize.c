/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:49:18 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/07 16:59:21 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define IN 1
#define OUT 2

int		ft_is_word(char c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A') ||
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		state;
	char	*cpy;

	state = OUT;
	cpy = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str - 'A' + 'a';
		++str;
	}
	str = cpy;
	while (*str)
	{
		if (ft_is_word(*str))
		{
			if (*str <= 'z' && *str >= 'a' && state == OUT)
				*str = *str - 'a' + 'A';
			state = IN;
		}
		else
			state = OUT;
		++str;
	}
	return (cpy);
}
