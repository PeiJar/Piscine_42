#include "header.h"

int	eval_expr(char *str)
{
	ft_remove_spaces(str);
	return (ft_parse_summands(&str));
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(eval_expr(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}
