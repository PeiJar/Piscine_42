#include "header.h"

char	ft_get(char **str)
{
	return (*(*str)++);
}

char	ft_peek(char *str)
{
	return (*str);
}

int		ft_parse_atom(char **str)
{
	int	result;

	result = 0;
	if (ft_peek(*str) == '(')
	{
		ft_get(str);
		result = ft_parse_summands(str);
		ft_get(str);
		return (result);
	}
	return (ft_get_number(str));
}

int		ft_parse_factors(char **str)
{
	int		result;
	char	op;

	result = ft_parse_atom(str);
	while (**str)
	{
		op = ft_peek(*str);
		if (op != '/' && op != '*' && op != '%')
			return (result);
		ft_get(str);
		if (op == '/')
			result /= ft_parse_atom(str);
		else if(op == '%')
			result %= ft_parse_atom(str);
		else
			result *= ft_parse_atom(str);
	}
	return (result);
}

int		ft_parse_summands(char **str)
{
	int		result;
	char	op;

	result = ft_parse_factors(str);
	while(**str)
	{
		op = ft_peek(*str);
		if(op != '-' && op != '+')
			return (result);
		ft_get(str);
		if (op == '+')
			result += ft_parse_factors(str);
		else
			result -= ft_parse_factors(str);
	}
	return (result);
}
