
NAME		=	libft.a

HEADER		=	libft.h

SRCS		=	ft_atoi.c\
				ft_bzero.c\
				ft_calloc.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_itoa.c\
				ft_memccpy.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_putendl_fd.c\
				ft_putchar_fd.c\
				ft_putnbr_fd.c\
				ft_putstr_fd.c\
				ft_split.c\
				ft_strchr.c\
				ft_strdup.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlcpy.c\
				ft_strlen.c\
				ft_strmapi.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strtrim.c\
				ft_substr.c\
				ft_tolower.c\
				ft_toupper.c\

BONUSSRCS	=	ft_lstadd_back_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstmap_bonus.c\
				ft_lstnew_bonus.c\
				ft_lstsize_bonus.c\

CC			=	gcc

CFLAGS		=	-Werror -Wextra -Wall

DEL			=	rm -f

OBJS		=	${SRCS:.c=.o}

BONUSOBJS	=	${BONUSSRCS:.c=.o}

$(NAME):		${OBJS}
				${CC} ${CFLAGS} -c -I ${HEADER} ${SRCS}
				ar rc ${NAME} ${OBJS}

all:			${NAME}

bonus:			${BONUSBJS} fclean
				${CC} ${CFLAGS} -c -I ${HEADER} ${SRCS} ${BONUSSRCS}
				ar rc ${NAME} ${OBJS} ${BONUSOBJS}

clean:
				${DEL} ${OBJS} ${BONUSOBJS}

fclean:			clean
				${DEL} ${NAME}

re:				fclean all

.PHONY: 		all clean fclean re bonus
