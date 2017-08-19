#include <unistd.h>
#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
}

int		ft_get_number(char **str)
{
	int	ret;

	ret = 0;
	while (ft_peek(*str) >= '0' && ft_peek(*str) <= '9')
		ret = ret * 10 + ft_get(str) - 48;
	return (ret);
}

void	ft_remove_spaces(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			j = i - 1;
			while (str[++j + 1])
				str[j] = str[j + 1];
			str[j] = 0;
		}
		++i;
	}
}
