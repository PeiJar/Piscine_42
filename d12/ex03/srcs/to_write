# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nweeks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 11:32:59 by nweeks            #+#    #+#              #
#    Updated: 2017/08/17 16:11:50 by nweeks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror -Iincludes
EXEC = ft_hexdump
SRCS = srcs/libft.c \
	   srcs/main.c \
	   srcs/functions.c \
	   srcs/utility.c

all: $(EXEC)

$(EXEC):
	$(CC) $(FLAGS) $(SRCS) -o $(EXEC)

clean:

fclean: clean
	rm -f $(EXEC)

re: fclean all
