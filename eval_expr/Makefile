CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDES = includes
SRCS = 	srcs/eval_expr.c \
		srcs/main.c	\
		srcs/libft.c
EXEC = eval_expr

all: $(EXEC)

$(EXEC):
	$(CC) $(FLAGS) -I$(INCLUDES) $(SRCS) -o $(EXEC)

clean:

fclean: clean
	rm -f $(EXEC)

re: fclean all
