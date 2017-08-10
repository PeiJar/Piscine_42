/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 16:23:21 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/13 09:18:26 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#define IN 0
#define OUT 1

int		ft_must_skip(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		++charset;
	}
	return (0);
}

int		ft_count_words(char *str, char *charset)
{
	int	state;
	int	words;

	state = OUT;
	words = 0;
	while (*str)
	{
		if (ft_must_skip(*str, charset))
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

int		ft_sizeof_word(char *str, char *charset)
{
	int count;

	count = 0;
	while (*str && !ft_must_skip(*(str++), charset))
		++count;
	return (count + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		words;
	int		cur_word;
	int		i;

	words = ft_count_words(str, charset) + 1;
	if (!(ret = malloc(words * sizeof(char *))))
		return (NULL);
	cur_word = 0;
	while (cur_word < words - 1)
	{
		while (*str && ft_must_skip(*str, charset))
			++str;
		ret[cur_word] = malloc(ft_sizeof_word(str, charset) * sizeof(char));
		i = 0;
		while (*str && !ft_must_skip(*str, charset))
			ret[cur_word][i++] = *(str++);
		ret[cur_word++][i] = 0;
	}
	ret[cur_word] = 0;
	return (ret);
}
