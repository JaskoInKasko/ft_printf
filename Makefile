CC = cc
CFLAGS = -Wall -Wextra -Werror
HEAD = ft_printf.h
SRC = ft_printf.c ft_printchar.c ft_printstr.c ft_print_int.c ft_print_uint.c\
ft_printhex.c ft_printuheX.c ft_printmem.c\

OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

.PHONY: all clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
