# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/19 12:02:21 by rrupp             #+#    #+#              #
#    Updated: 2023/08/18 11:50:20 by rrupp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Bureaucrats

CFLAGS := -Wall -Werror -Wextra -std=c++98

CC := c++

OBJ_P := ./obj/

SRC :=	main.cpp					\
		Bureaucrat.cpp				\
		ShrubberyCreationForm.cpp	\
		RobotomyRequestForm.cpp		\
		PresidentialPardonForm.cpp	\
		AForm.cpp					\
		Intern.cpp

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
	echo "build message!"

clean:
	rm -f $(OBJ)
	rm -fd $(OBJ_P)
	echo "Deleted the o_files!"

fclean: clean
	rm -f $(NAME)
	echo "delete message!"

re: fclean all