CC = CC
CFLAGS = -Wall -Wextra -Werror
HEAD = ft_printf.h
SRC =

OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

.PHONY: all clean fclean re

clean:
	rm -f $(OBJ) $(BONUSOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all