# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csibyl <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/27 13:17:02 by csibyl            #+#    #+#              #
#    Updated: 2020/07/27 14:26:02 by csibyl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
SRC		= ft_display_file.c
RM		= rm -f
OBJS	= ${SRC:.c=.o}

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re  $(NAME) norm
