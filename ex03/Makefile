# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 17:53:17 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/17 11:50:34 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++

CPP_FLAGS= -Wall -Werror -Wextra -std=c++98

NAME=triangle

SRCS= Fixed.cpp main.cpp Point.cpp bsp.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re:	fclean all
	@echo "remaking files!"
