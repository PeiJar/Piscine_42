/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 08:51:25 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/11 10:48:42 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	temp_c;
	int	temp_d;
	int	temp_a;
	int	temp_b;

	temp_a = ***a;
	temp_b = *b;
	temp_d = ****d;
	temp_c = *******c;
	*******c = temp_a;
	****d = temp_c;
	*b = temp_d;
	***a = temp_b;
}
