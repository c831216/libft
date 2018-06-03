# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csolomo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/29 09:28:20 by csolomo           #+#    #+#              #
#    Updated: 2018/05/29 09:28:24 by csolomo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/*.c
OBJS = *.o
HEADER = libft.h
ARC = ar rc

all: $(NAME)

$(NAME):
	@$(CC) $(SRCS) $(CFLAGS) -I ./
	@$(ARC) $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "libft Compiled Successfully"


clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
