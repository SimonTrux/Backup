# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: struxill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 19:43:51 by struxill          #+#    #+#              #
#    Updated: 2018/11/07 19:45:37 by struxill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG	= ft_display_file
CFLAGS	= -Wall -Wextra -Werror
SOURCES	= ft_display_file.c ft_putchar.c ft_putchar2.c ft_putstr.c ft_putstr2.c

all:
	gcc -c $(CFLAGS) $(SOURCES)
	gcc *.o -o $(PROG)

clean:
	rm -f *.o

fclean: clean
	rm -f $(PROG)
