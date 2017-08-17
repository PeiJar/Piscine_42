# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nweeks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/15 14:31:56 by nweeks            #+#    #+#              #
#    Updated: 2017/08/15 14:44:25 by nweeks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = main.c
EXECUTABLE = ft_display_file

all: $(EXECUTABLE)

$(EXECUTABLE):
	$(CC) $(FLAGS) $(SRCS) -o $(EXECUTABLE)

clean:
	rm -f main.o

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all
