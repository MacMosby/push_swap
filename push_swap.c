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
	/* t_Node	*a;
	t_Node	*b;
	t_Node	*c;
	int		i; */

	t_Node *curr;

	/* int *steps = ft_find_steps(stack_a, stack_b, curr);
	int i = 0;
	while (i < 4)
	{
		printf("%d", steps[i]);
		i++;
	} */
	int		*min_moves = NULL;
	int		*new_moves;

	push_x_to_y(stack_a, stack_b);
	push_x_to_y(stack_a, stack_b);

	ft_set_indexes(stack_a);
	ft_set_indexes(stack_b);



	while (ft_nums_on_stack(stack_a) > 0)
	{
		printf("stack a:\n");
		printf_stack(stack_a);

		printf("stack b:\n");
		printf_stack(stack_b);
		// set indexes
		ft_set_indexes(stack_a);
		ft_set_indexes(stack_b);
		// looping over stack a
		curr = *stack_a;
		while (curr != NULL)
		{
			// find minumum number of moves for this number
			new_moves = ft_find_steps(stack_a, stack_b, curr);
			int i = 0;
			while (i < 4)
			{
				printf("%d\n", new_moves[i]);
				i++;
			}
			printf("\n");
			if (min_moves == NULL)
				min_moves = new_moves;
			else if (new_moves[0] + new_moves[2] < min_moves[0] + min_moves[2])
				min_moves = new_moves;
			//free(new_moves);
			curr = curr->next;
		}
		// move number in right position
		ft_execute_moves(min_moves, stack_a, stack_b);
		min_moves = NULL;
	}

	ft_set_indexes(stack_a);
	ft_set_indexes(stack_b);
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
	// call function to setup stack a passing the input
	stack_a = ft_stack_builder(argc, argv);
	stack_b = NULL;

	push_swap(&stack_a, &stack_b);

	//print stacks to check result
	printf("stack a:\n");
	printf_stack(&stack_a);

	printf("stack b:\n");
	printf_stack(&stack_b);

	return (0);
}
