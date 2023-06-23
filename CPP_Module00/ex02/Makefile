# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 12:02:21 by rrupp             #+#    #+#              #
#    Updated: 2023/06/23 13:24:19 by rrupp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := tests

CFLAGS := -Wall -Werror -Wextra -std=c++98

CC := c++

OBJ_P := ./obj/

SRC :=	tests.cpp\
		Account.cpp

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
	echo "Preped the Test"

clean:
	rm -f $(OBJ)
	rm -fd $(OBJ_P)
	echo "Deleted the o_files!"

fclean: clean
	rm -f $(NAME)
	echo "Cleaned everything up!"

re: fclean all