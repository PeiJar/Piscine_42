/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 09:40:56 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/10 21:30:38 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	char	*swap;
	int		i;
	int		j;
	int		size;

	size = 0;
	while (tab[size])
		++size;
	i = size;
	while (i--)
	{
		j = 0;
		while (j < size - 1)
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
			}
			++j;
		}
	}
}
