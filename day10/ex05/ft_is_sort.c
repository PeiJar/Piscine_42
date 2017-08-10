/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 15:47:32 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/14 09:16:11 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int	is_sorted_asc;
	int	is_sorted_desc;
	int	i;

	is_sorted_asc = 1;
	is_sorted_desc = 1;
	i = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			is_sorted_asc = 0;
		if ((*f)(tab[i + 1], tab[i]) > 0)
			is_sorted_desc = 0;
		++i;
	}
	return (is_sorted_asc || is_sorted_desc);
}
