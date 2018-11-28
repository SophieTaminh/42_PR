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


NAME = ft_display_file



SRCS = 	./srcs/ft_putchar.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \
		./srcs/ft_swap.c \
		ft_display_file.c

OBJS = $(SRC_NAME:.c=.o)

CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJS)

%.o: $(SRCS)%.c
	gcc $(CFLAGS) -o $(NAME) $@ -c $<

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
