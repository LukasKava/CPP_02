# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkavalia <lkavalia@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/13 16:27:48 by lkavalia          #+#    #+#              #
#    Updated: 2023/02/13 16:30:16 by lkavalia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=c++

CPP_FLAGS= -Wall -Werror -Wextra -std=c++98

NAME=fixed

SRCS= Fixed.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPP_FLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)
	@echo "force cleaning!"

re:	fclean all
	@echo "remaking files!"
