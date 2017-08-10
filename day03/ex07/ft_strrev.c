/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 09:37:31 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/04 10:24:42 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen2(char *str)
{
	int count;

	count = 0;
	while (*(str++))
		++count;
	return (count);
}

char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	tmp;

	start = 0;
	end = ft_strlen2(str) - 1;
	while (start < end)
	{
		tmp = str[start];
		str[start++] = str[end];
		str[end--] = tmp;
	}
	return (str);
}
