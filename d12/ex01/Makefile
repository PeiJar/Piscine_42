# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nweeks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/15 14:31:56 by nweeks            #+#    #+#              #
#    Updated: 2017/08/17 09:44:55 by nweeks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror -Iincludes
SRCS = srcs/main.c \
	   srcs/lib.c
EXECUTABLE = ft_cat

all: $(EXECUTABLE)

$(EXECUTABLE):
	$(CC) $(FLAGS) $(SRCS) -o $(EXECUTABLE)

clean:
	rm -f main.o

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all
