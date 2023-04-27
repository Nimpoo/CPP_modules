# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 11:52:50 by mayoub            #+#    #+#              #
#    Updated: 2023/04/27 18:18:10 by sihemayoub       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CXXFLAGS	=	-Werror -Wall -Wextra -std=c++98

SRC		=	RPN.cpp		\
			main.cpp	\

OBJ		=	$(SRC:.cpp=.o)

NAME	=	RPN

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
