# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nweeks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/10 16:28:12 by nweeks            #+#    #+#              #
#    Updated: 2017/08/16 11:36:21 by nweeks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror -Iincludes
NAME = ft_advanced_do-op
SRCS = src/lib.c\
	   src/main.c \
	   src/functions.c \

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf main.o functions.o lib.o

fclean: clean
	rm -f $(NAME)

re: fclean all
