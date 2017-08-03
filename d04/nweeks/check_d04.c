/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin &lt;marvin@42.fr&gt;                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 16:49:14 by fbabin            #+#    #+#             */
/*   Updated: 2016/08/23 10:17:09 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_corr.h"

int		main(int argc, char **argv)
{
	(void)argc;
	if (ft_strIn("ex00", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex00
		#define ex00
		#include "ex00/ft_iterative_factorial.c"
		#endif
		start_corr(0);

		printf("expected output :\n%d\n", ft_iterative_factorial_corr(5));
		printf("your output :\n%d\n", ft_iterative_factorial(5));
	}
	
	if (ft_strIn("ex01", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex01
		#define ex01
		#include "ex01/ft_recursive_factorial.c"
		#endif
		start_corr(1);

		printf("expected output :\n%d\n", ft_iterative_factorial_corr(5));
		printf("your output :\n%d\n", ft_recursive_factorial(5));
	}
	
	if (ft_strIn("ex02", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex02
		#define ex02
		#include "ex02/ft_iterative_power.c"
		#endif
		start_corr(2);

		printf("expected output :\n%d\n", ft_iterative_power_corr(5, 4));
		printf("your output :\n%d\n", ft_iterative_power(5, 4));
	}
	
	if (ft_strIn("ex03", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex03
		#define ex03
		#include "ex03/ft_recursive_power.c"
		#endif
		start_corr(3);

		printf("expected output :\n%d\n", ft_iterative_power_corr(5, 4));
		printf("your output :\n%d\n", ft_recursive_power(5, 4));
	}

	if (ft_strIn("ex04", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex04
		#define ex04
		#include "ex04/ft_fibonacci.c"
		#endif
		start_corr(4);

		printf("expected output :\n%d\n", ft_fibonacci_corr(5));
		printf("your output :\n%d\n", ft_fibonacci(5));
	}

	if (ft_strIn("ex05", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex05
		#define ex05
		#include "ex05/ft_sqrt.c"
		#endif
		start_corr(5);

		printf("expected output :\n%d\n", ft_sqrt_corr(16));
		printf("your output :\n%d\n", ft_sqrt(16));
	}

	if (ft_strIn("ex06", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex06
		#define ex06
		#include "ex06/ft_is_prime.c"
		#endif
		start_corr(6);

		printf("expected output :\n%d\n", ft_is_prime_corr(5));
		printf("your output :\n%d\n", ft_is_prime(5));
	}

	if (ft_strIn("ex07", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex07
		#define ex07
		#include "ex07/ft_find_next_prime.c"
		#endif
		start_corr(7);

		printf("expected output :\n%d\n", ft_find_next_prime_corr(16));
		printf("your output :\n%d\n", ft_find_next_prime(16));
	}

	if (ft_strIn("ex08", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex08
		#define ex08
		#include "ex08/ft_eight_queens_puzzle.c"
		#endif
		start_corr(8);

		printf("expected output :\n%d\n", 92);
		printf("your output :\n%d\n", ft_eight_queens_puzzle());
	}

	if (ft_strIn("ex09", argv) || ft_strIn("all", argv))
	{
		#ifndef	ex09
		#define ex09
		#include "ex09/ft_eight_queens_puzzle_2.c"
		#endif
		start_corr(9);

		printf("expected output :\n");
		ft_eight_queens_puzzle_2_corr();
		printf("your output :\n");
		ft_eight_queens_puzzle_2();
	}
	return(0);
}
