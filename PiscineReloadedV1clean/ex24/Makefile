# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: struxill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 14:29:22 by struxill          #+#    #+#              #
#    Updated: 2018/11/07 17:57:00 by struxill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADERS	= ./includes/
LIB		= libft.a

all:
	gcc -c $(SOURCES)
	ar rc $(LIB) *.o

clean:
	rm *.o

fclean: clean
	rm $(LIB)

re: fclean all
