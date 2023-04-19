# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 17:54:31 by mayoub            #+#    #+#              #
#    Updated: 2023/04/19 19:59:10 by sihemayoub       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CXXFLAGS	=	-Werror -Wall -Wextra -std=c++98

SRC		=	main.cpp	\

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Quelques_fonctions_pour_commencer

%.o		:	%.cpp
			$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
			$(CC) $(CXXFLAGS) $(SRC) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rdf $(OBJ)

fclean	:	clean
			rm -rdf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
