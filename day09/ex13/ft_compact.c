/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 09:36:00 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 09:59:15 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int lenght)
{
	int	count;

	count = 0;
	while (count < lenght)
	{
		if (!tab[count])
		{
			while (count < lenght - 1)
			{
				tab[count] = tab[count + 1];
				++count;
			}
			--lenght;
			count = 0;
		}
		++count;
	}
	return (lenght);
}
