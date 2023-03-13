# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 23:26:54 by sihemayoub        #+#    #+#              #
#    Updated: 2023/03/12 16:55:22 by sihemayoub       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CFLAGS	=	-Werror -Wall -Wextra -std=c++98

SRC		=	Animal.cpp		\
			Cat.cpp			\
			Dog.cpp			\
			WrongAnimal.cpp	\
			WrongCat.cpp	\
			Brain.cpp		\
			main.cpp		\

#OBJ		=	$(SRC:.cpp=.o)

NAME	=	Je_ne_veux_pas_brûler_le_monde

$(NAME)	:	#$(OBJ)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rdf $(OBJ)

fclean	:	clean
			rm -rdf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
