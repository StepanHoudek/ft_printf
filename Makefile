# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 15:41:13 by shoudek           #+#    #+#              #
#    Updated: 2024/01/23 14:24:27 by shoudek          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	cc
CFLAGS	:=	-Wall -Wextra -Werror
RM		:=	rm -f
NAME	:=	libftprintf.a
SRCS	:=	ft_printf.c ft_putstr.c ft_putnbr.c ft_putchar.c ft_puthex.c ft_format.c ft_putunsnbr.c \
			ft_handleptr.c
OBJS	:=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re
