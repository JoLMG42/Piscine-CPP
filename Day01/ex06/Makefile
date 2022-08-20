# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 13:36:18 by jtaravel          #+#    #+#              #
#    Updated: 2022/08/18 10:22:34 by jtaravel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/Harl.cpp \
	main.cpp \

OBJS =	${SRCS:.cpp=.o}

HEADERS =	includes

NAME =	harlFilter

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
