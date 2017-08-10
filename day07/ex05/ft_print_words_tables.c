/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_word_tables.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 09:37:21 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/09 21:03:35 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
char	**ft_split_whitespaces(char *str);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	int	count;

	count = 0;
	while (tab[count])
		ft_putstr(tab[count++]);
}
