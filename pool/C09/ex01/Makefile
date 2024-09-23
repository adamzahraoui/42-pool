# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adzahrao <adzahrao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 16:22:56 by adzahrao          #+#    #+#              #
#    Updated: 2024/09/18 18:16:15 by adzahrao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS    = ${SRCS:.c=.o}
INCS    = includes
NAME    = libft.a
LIBC    = ar rc
LIBR    = ranlib
CC      = gcc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all