# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 11:52:39 by mayoub            #+#    #+#              #
#    Updated: 2023/04/24 14:44:25 by sihemayoub       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CXXFLAGS	=	-Werror -Wall -Wextra -g -fsanitize=address -std=c++98

SRC		=	BitcoinExchange.cpp	\
			main.cpp			\

OBJ		=	$(SRC:.cpp=.o)

NAME	=	btc

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
