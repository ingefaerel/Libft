# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emustafi <elmiramust2010@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/29 12:34:13 by emustafi          #+#    #+#              #
#    Updated: 2025/06/10 12:08:13 by emustafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) ./a.out libft.so

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	cc -Wall -Wextra -Werror -fPIC -c ft_*.c
	gcc -shared -o libft.so *.o

