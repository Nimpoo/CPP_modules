# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 14:54:14 by mayoub            #+#    #+#              #
#    Updated: 2023/02/11 19:11:44 by mayoub           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CFLAGS	=	-Werror -Wall -Wextra -std=c++98 -fsanitize=address

SRC		=	PhoneBook.cpp	\
			Contact.cpp		\
			main.cpp

#OBJ		=	$(SRC:.cpp=.o)

NAME	=	PhoneBook

$(NAME)	:	#$(OBJ)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rdf $(OBJ)

fclean	:	clean
			rm -rdf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
