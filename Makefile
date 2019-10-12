SRCS		= ft_queenspuzzle.c ft_fonction.c

OBJS		= ${SRCS:.c=.o}

NAME		= QueensPuzzle

CFLAGS		= -Wall -Wextra -Werror

DIR			= srcs/

COMMAND		= gcc

RM			= rm -f

.c.o:
			 $(COMMAND) $(CFLAGS) -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
				${COMMAND} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
						${RM} ${OBJS}

fclean:		clean
						${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
