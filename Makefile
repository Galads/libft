# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brice <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 10:41:41 by brice             #+#    #+#              #
#    Updated: 2020/11/02 19:08:24 by brice            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ./*.c

OBJS		= ${SRCS:.c=.o}

INCLUDES	= ./libft.h

CFLAGS		= -Wall -Wextra -Werror

GCC			= gcc

NAME		= libft.a

all:		${NAME}

${NAME}:
	${GCC} -c -I ${INCLUDES} ${CFLAGS} ${SRCS}
#	mv *.o ./
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
		rm -f ${OBJS}	

fclean:	clean
		rm -f ${NAME}

re:		fclean  all

.PHONY: all clean fclean re
