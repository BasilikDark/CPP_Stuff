# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 12:02:21 by rrupp             #+#    #+#              #
#    Updated: 2023/06/05 12:46:38 by rrupp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Harl

CFLAGS := -Wall -Werror -Wextra -std=c++98

CC := c++

OBJ_P := ./obj/

SRC :=	main.cpp\
		Harl.cpp

OBJ := $(SRC:%.cpp=$(OBJ_P)%.o)

$(OBJ_P)%.o:%.cpp
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

.SILENT:

.PHONY:
	all clean fclean re

all:$(NAME)

vpath %.cpp src

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	echo "OH no it's Harl! .-"

clean:
	rm -f $(OBJ)
	rm -fd $(OBJ_P)
	echo "Deleted the o_files!"

fclean: clean
	rm -f $(NAME)
	echo "Finally he is gone!"

re: fclean all