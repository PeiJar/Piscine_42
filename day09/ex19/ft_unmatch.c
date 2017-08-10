/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 10:35:41 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 11:51:46 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i++ < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			++j;
		}
	}
}

int		ft_unmatch(int *tab, int lenght)
{
	int	count;

	count = 0;
	ft_sort_integer_table(tab, lenght);
	while (count < lenght - 1)
	{
		if (tab[count] != tab[count + 1])
			return (tab[count]);
		count += 2;
	}
	return (tab[lenght - 1]);
}
