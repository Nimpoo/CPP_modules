# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 23:26:54 by sihemayoub        #+#    #+#              #
#    Updated: 2023/04/02 18:06:32 by mayoub           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CFLAGS	=	-Werror -Wall -Wextra -std=c++98

SRC		=	ClapTrap.cpp	\
			ScavTrap.cpp	\
			main.cpp		\

OBJ		=	$(SRC:.cpp=.o)

NAME	=	Serena,_mon_amour_!

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
