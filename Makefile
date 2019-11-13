
NAME	= libft.a

HEADER	= libft.h

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

CMP	= gcc

FLAGS	= -Werror -Wextra -Wall

DEL	= rm -f

OBJS	= ${SRCS:.c=.o}

${NAME}:	${OBJS}
		${CMP} -c -I ${HEADER} ${SRCS}
		ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:
		${DEL} ${OBJS}

fclean:		clean
		 ${DEL} ${NAME}

re:		fclean all

.PHONY: 	all clean fclean re
