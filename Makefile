# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 15:44:13 by mrodenbu          #+#    #+#              #
#    Updated: 2023/09/14 15:44:16 by mrodenbu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = *.c

HEADER = push_swap.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(HEADER)
	cc $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
