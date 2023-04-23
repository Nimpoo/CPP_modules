# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 11:52:39 by mayoub            #+#    #+#              #
#    Updated: 2023/04/23 12:18:45 by sihemayoub       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CXXFLAGS	=	-Werror -Wall -Wextra -std=c++98

SRC		=	BitcoinExchange.cpp	\
			main.cpp			\

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Bitcoin_Exchange

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
