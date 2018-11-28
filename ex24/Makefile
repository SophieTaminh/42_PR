# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: staminh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/19 18:51:26 by staminh           #+#    #+#              #
#    Updated: 2018/11/19 19:02:58 by staminh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SRC_PATH = ./srcs/

SRC_NAME = 	ft_putchar.c \
		ft_putstr.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_swap.c

OBJ_NAME = $(SRC_NAME:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -Iinclude 

all: $(NAME)

$(NAME): $(OBJ_NAME)
	ar rc $(NAME) $(OBJ_NAME)
	ranlib $(NAME)

%.o: $(SRC_PATH)%.c
	gcc $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
		/bin/rm -f *.o


fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
