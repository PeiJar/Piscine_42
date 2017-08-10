/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 16:23:21 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/09 14:41:56 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define IN 0
#define OUT 1

int		ft_count_words(char *str)
{
	int	state;
	int	words;

	state = OUT;
	words = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = OUT;
		else
		{
			if (state == OUT)
				++words;
			state = IN;
		}
		++str;
	}
	return (words);
}

int		ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int		ft_size_of_word(char *str)
{
	int count;

	count = 0;
	while (!ft_is_whitespace(*(str++)) && *str)
		++count;
	return (count + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**ret;
	int		cur_word;
	int		i;
	int		words;

	words = ft_count_words(str);
	ret = malloc((ft_count_words(str) + 1) * sizeof(char *));
	if (!ret)
		return (0);
	cur_word = 0;
	while (cur_word < words)
	{
		while (*str && ft_is_whitespace(*str))
			++str;
		ret[cur_word] = malloc(ft_size_of_word(str) * sizeof(char));
		i = 0;
		while (!ft_is_whitespace(*str) && *str)
			ret[cur_word][i++] = *(str++);
		ret[cur_word][i] = 0;
		++cur_word;
	}
	ret[cur_word] = 0;
	return (ret);
}
