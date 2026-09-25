# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/16 13:53:12 by mmutsulk          #+#    #+#              #
#    Updated: 2024/12/17 14:37:00 by mmutsulk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a
CC      = gcc
CFLAGS  = -Wall -Werror -Wextra -I./includes

SRC     = ft_printf.c \
          ft_putchar.c \
          ft_putstr.c \
          ft_putnbr.c \
          ft_strlen.c \
          ft_putnbr_unsigned.c \
          ft_putnbr_hex_maj.c \
          ft_putnbr_hex_min.c \
          ft_put_ptr.c

OBJS    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
