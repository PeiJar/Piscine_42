# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nweeks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/10 16:28:12 by nweeks            #+#    #+#              #
#    Updated: 2017/08/10 16:28:13 by nweeks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = do_opp
SRCS = main.c functions.c

all:
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf main.o functions.o

fclean: clean
	rm -f do_opp
