# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 12:02:21 by rrupp             #+#    #+#              #
#    Updated: 2023/08/12 14:03:25 by rrupp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := CatsnDogs

W_NAME := WCatsnDogs

CFLAGS := -Wall -Werror -Wextra -std=c++98

CC := c++

OBJ_P := ./obj/

W_OBJ_P := ./w_obj/

SRC :=	Animal.cpp	\
		Cat.cpp		\
		Dog.cpp		\
		main.cpp

W_SRC :=	Animal.cpp		\
			WrongAnimal.cpp	\
			WrongCat.cpp	\
			Dog.cpp			\
			wrongmain.cpp

OBJ := $(SRC:%.cpp=$(OBJ_P)%.o)

$(OBJ_P)%.o:%.cpp
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

W_OBJ := $(W_SRC:%.cpp=$(W_OBJ_P)%.o)

$(W_OBJ_P)%.o:%.cpp
	mkdir -p w_obj
	$(CC) $(CFLAGS) -c $< -o $@

.SILENT:

.PHONY:
	all clean fclean re

vpath %.cpp src

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	echo "build message!"

wrong:$(W_NAME)

$(W_NAME): $(W_OBJ)
	$(CC) -o $(W_NAME) $(W_OBJ)
	echo "build bullshit"

clean:
	rm -f $(OBJ)
	rm -fd $(OBJ_P)
	rm -f $(W_OBJ)
	rm -fd $(W_OBJ_P)
	echo "Deleted the o_files!"

fclean: clean
	rm -f $(NAME)
	rm -f $(W_NAME)
	echo "delete message!"

re: fclean all