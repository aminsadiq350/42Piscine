SRCS		= main.c

OBJS		= ${SRCS:.c=.o}

NAME		= ft_display_file

CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

${NAME}:	${OBJS}
			gcc ${CFLAGS} ${OBJS} -o ${NAME}  

all:		${NAME}

clean:
			${RM} ${OBJS}
			${RM} *.h.gch

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re