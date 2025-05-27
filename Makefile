NAME = libft.a
SRC = ft_isalpha.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) ./a.out

fclean: clean
	rm -f $(NAME)

re: fclean all
