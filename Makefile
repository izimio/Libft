SRCS	=   ft_atoi.c ft_strlen.c
SRCS_bonus = 

OBJS = ${SRCS:.c=.o}

OBJS_bonus = ${SRCS_bonus:.c=.o}

NAME = libft.a
CC = gcc
AR ?= ar
RM ?= rm -f
CFLAGS = -Wall -Wextra -Werror -I.

.c.o:
	$(CC) $(CFLAGS) -c $<

$(NAME):	${OBJS}
	${AR} rc ${NAME} ${OBJS}

$(OBJS) : libft.h

$(OBJS_bonus) : libft.h

bonus:		${OBJS} ${OBJS_bonus}
	${AR} rc ${NAME} ${OBJS} ${OBJS_bonus}

all : 		${NAME}

clean :
	${RM} ${OBJS} ${OBJS_bonus}

fclean : 	clean
	${RM} ${NAME}

re :		fclean all

.PHONY: all clean fclean re libft.a bonus