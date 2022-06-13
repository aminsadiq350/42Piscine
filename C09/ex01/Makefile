# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashaikhn <as@42abudhabi.ae>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 06:11:14 by ashaikhn          #+#    #+#              #
#    Updated: 2021/06/08 06:11:48 by ashaikhn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	srcs/ft_putchar.c\
			srcs/ft_putstr.c\
			srcs/ft_strlen.c\
			srcs/ft_strcmp.c\
			srcs/ft_swap.c
OBJS	= 	${SRCS:.c=.o}
INCS	= 	includes
NAME	= 	libft.a
CC		= 	gcc
RM		= 	rm -f
CFLAGS	= 	-Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o
