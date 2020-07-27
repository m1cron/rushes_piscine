# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csibyl <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/27 14:34:43 by csibyl            #+#    #+#              #
#    Updated: 2020/07/27 14:35:32 by csibyl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_cat
SRC		= ft_cat.c
RM		= rm -f
OBJS	= ${SRC:.c=.o}

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all]

.PHONY: all clean fclean re  $(NAME)
