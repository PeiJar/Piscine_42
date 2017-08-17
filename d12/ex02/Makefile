# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nweeks <nweeks@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/17 10:42:23 by nweeks            #+#    #+#              #
#    Updated: 2017/08/17 10:52:28 by nweeks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror -Iincludes
SRCS = srcs/lib.c \
	   srcs/main.c
EXEC = ft_tail

all: $(EXEC)

$(EXEC):
	$(CC) $(FLAGS) $(SRCS) -o $(EXEC)

clean:

fclean : clean
	rm -f $(EXEC)

re: fclean all
