CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes/ -c
LIB_NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c 
HEADERS = includes/ft.h
BFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
	$(CC) $(CFLAGS) $(SRCS)
	ar rc $(LIB_NAME) $(BFILES) 
	ranlib $(LIB_NAME)

clean:
	rm -rf $(BFILES)

fclean: clean
	rm -rf $(LIB_NAME)

re: fclean all

.PHONY: re all
