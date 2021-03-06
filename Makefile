SRCS	=   ft_atoi.c ft_strlen.c ft_strlcpy.c ft_toupper.c \
			ft_tolower.c ft_isalnum.c \
			ft_isascii.c ft_isprint.c \
			ft_isalpha.c ft_isdigit.c \
			ft_memset.c ft_bzero.c ft_calloc.c \
			ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c \
			ft_strdup.c ft_strlcat.c ft_strchr.c \
			ft_strrchr.c ft_strnstr.c \
			ft_strncmp.c ft_substr.c ft_itoa.c ft_split.c \
			ft_strmapi.c ft_strtrim.c ft_strjoin.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SRCBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstadd_back.c \
			ft_lstlast.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c

OBJBONUS = ${SRCBONUS:.c=.o}

OBJS = ${SRCS:.c=.o}

HEADER = libft.h

NAME = libft.a

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror

%.o:	%.c ${HEADER}
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}

bonus:		${OBJBONUS}
			@ar rc ${NAME} ${OBJBONUS}

all:		${NAME}
			
clean:
			${RM} ${OBJS} ${OBJBONUS}

fclean:		clean
			${RM} ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re