# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 23:26:54 by sihemayoub        #+#    #+#              #
#    Updated: 2023/04/05 11:13:53 by sihemayoub       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CFLAGS	=	-Werror -Wall -Wextra -std=c++98 -fsanitize=address

SRC		=	main.cpp			\
			Character.cpp		\
			AMateria.cpp		\
			MateriaSource.cpp	\
			Ice.cpp				\
			Cure.cpp			\

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Interface_and_recap

%.o		:	%.cpp
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	:	$(OBJ)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rdf $(OBJ)

fclean	:	clean
			rm -rdf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
