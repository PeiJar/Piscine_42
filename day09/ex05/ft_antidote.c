/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:43:10 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/10 21:50:16 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_antidote(int i, int j, int k)
{
	if (i > j)
		ft_swap(&i, &j);
	if (j > k)
		ft_swap(&j, &k);
	if (i > j)
		ft_swap(&i, &j);
	return (j);
}
