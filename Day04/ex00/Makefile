# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 13:36:18 by jtaravel          #+#    #+#              #
#    Updated: 2022/09/09 17:51:27 by jtaravel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/Animal.cpp \
	srcs/Dog.cpp \
	srcs/Cat.cpp \
	srcs/WrongAnimal.cpp \
	srcs/WrongCat.cpp \
	main.cpp \

OBJS =	${SRCS:.cpp=.o}

HEADERS =	includes

NAME =	Animal

CC =	c++

RM =	rm -f

CFLAGS =	-Wall -Wextra -Werror -std=c++98 -g3

.cpp.o:
		${CC} ${CFLAGS} -I${HEADERS} -c $< -o ${<:.cpp=.o}


${NAME}:	${OBJS}
		${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY:		all clean flcean re
