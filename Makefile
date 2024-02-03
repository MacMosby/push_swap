# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 15:44:13 by mrodenbu          #+#    #+#              #
#    Updated: 2024/02/03 14:43:33 by marcrodenbu      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = 	push_swap.c \
		ft_atoi.c \
		ft_check_final_order.c \
		ft_execute_moves.c \
		ft_find_steps.c \
		ft_free_stack.c \
		ft_insert_end.c \
		ft_less_numbers.c \
		ft_nums_on_stack.c \
		ft_set_indexes.c \
		ft_sort_a.c \
		ft_sort_three.c \
		ft_split.c \
		ft_stack_builder.c \
		stack_operations_1.c \
		stack_operations_2.c

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
