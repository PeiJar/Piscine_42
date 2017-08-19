#ifndef HEADER_H
# define HEADER_H

char	ft_get(char **str);
char	ft_peek(char *str);
int		ft_parse_summands(char **str);
int		ft_parse_factors(char **str);
int		ft_parse_atom(char **str);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_remove_spaces(char *str);
int		ft_get_number(char **str);
#endif
