/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 11:47:29 by nweeks            #+#    #+#             */
/*   Updated: 2017/08/20 23:38:36 by nweeks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char	tape[2048];
	char	*code = argv[1];

	for (int i = 0; i < 2048; ++i)
		tape[i] = 0;
	char	*ptr = tape;

	for (; *code; ++code)
	{
		if (*code == '>')
			++ptr;
		else if (*code == '<')
			--ptr;
		else if (*code == '+')
			++*ptr;
		else if (*code == '-')
			--*ptr;
		else if (*code == '.')
			write(1, ptr, 1);
		else if (*code == '[' && *ptr == 0)
		{
			int	bracket_count = 1;
			++code;
			while (bracket_count)
			{
				if (*code == ']' && bracket_count == 1)
					break;
				else if (*code == ']')
					bracket_count--;
				else if (*code == '[')
					bracket_count++;
				++code;
			}
		}
		else if (*code == ']' && *ptr)
		{
			int	bracket_count = 1;
			--code;
			while (bracket_count)
			{
				if (*code == '[' && bracket_count == 1)
					break;
				else if (*code == '[')
					bracket_count--;
				else if (*code == ']')
					bracket_count++;
				--code;
			}
		}
	}
}
