# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 16:48:31 by mayoub            #+#    #+#              #
#    Updated: 2023/04/22 19:05:52 by sihemayoub       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CXXFLAGS	=	-Werror -Wall -Wextra -std=c++98

SRC		=	main.cpp		\

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Abomination_mutante

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
