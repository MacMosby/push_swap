/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:50:59 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/09/13 16:51:10 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printf_stack(t_Node **stack)
{
	t_Node	*curr;

	curr = *stack;
	while (curr != NULL)
	{
		printf("num: %d, index: %d\n", curr->x, curr->index);
		curr = curr->next;
	}
}

void	push_swap(t_Node **stack_a, t_Node **stack_b)
{
	t_Node	*curr;
	t_Node	*b_num;
	int		*min_moves;
	int		*new_moves;

	if (ft_nums_on_stack(stack_a) > 5)
	{
		push_x_to_y(stack_a, stack_b);
		printf("pb\n");
		push_x_to_y(stack_a, stack_b);
		printf("pb\n");
		while (ft_nums_on_stack(stack_a) > 0)
		{
			ft_set_indexes(stack_a);
			ft_set_indexes(stack_b);
			min_moves = NULL;
			curr = *stack_a;
			while (curr != NULL)
			{
				b_num = *stack_b;
				new_moves = ft_find_steps(stack_a, stack_b, curr, b_num);
				if (min_moves == NULL)
					min_moves = new_moves;
				if (new_moves[0] + new_moves[2] < min_moves[0] + min_moves[2])
					min_moves = new_moves;
				//free(new_moves);
				curr = curr->next;
			}
			ft_execute_moves(min_moves, stack_a, stack_b);
		}
	}
	/* else
		ft_less_numbers(stack_a, stack_b); */
	while (ft_nums_on_stack(stack_b) > 0)
	{
		printf("pa\n");
		push_x_to_y(stack_b, stack_a);
	}
	ft_set_indexes(stack_a);
	ft_set_indexes(stack_b);
	ft_sort_a(stack_a);
}

int	main(int argc, char **argv)
{
	t_Node	*stack_a;
	t_Node	*stack_b;

	if (argc == 1)
	{
		printf("give back to prompt");
		exit(-1);
	}
	stack_a = ft_stack_builder(argc, argv);
	stack_b = NULL;
	push_swap(&stack_a, &stack_b);
	// free both stacks
	return (0);
}
