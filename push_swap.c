/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:50:59 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/16 16:52:33 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printf_stack(t_Node **stack)
{
	t_Node	*curr;

	curr = *stack;
	while (curr != NULL)
	{
		printf("num: %d\n", curr->x);
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
		push_a_to_b(stack_a, stack_b);
		push_a_to_b(stack_a, stack_b);
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
				{
					free(min_moves);
					min_moves = new_moves;
				}
				else
				{
					free(new_moves);
				}
				curr = curr->next;
			}
			ft_execute_moves(min_moves, stack_a, stack_b);
			free(min_moves);
		}
	}
	else
		ft_less_numbers(stack_a, stack_b);
	while (ft_nums_on_stack(stack_b) > 0)
		push_b_to_a(stack_b, stack_a);
	ft_set_indexes(stack_a);
	ft_set_indexes(stack_b);
	ft_sort_a(stack_a);
	ft_free_stack(stack_a);
}

int	main(int argc, char **argv)
{
	t_Node	*stack_a;
	t_Node	*stack_b;
	char	**nums;
	int		wc;
	int i = 1;

	if (argc == 1)
	{
		exit(-1);
	}
	if (argc == 2)
	{
		nums = ft_split(argv[1]);
		while (i < 6)
		{
			printf("number: %s\n", nums[i]);
			i++;
		}
		wc = ft_get_word_count(argv[1]);
		stack_a = ft_stack_builder(wc, nums);
		printf_stack(&stack_a);
		// free nums - coming from ft_split - first inner ptrs, then outer one
	}
	else
		stack_a = ft_stack_builder(argc, argv);
	stack_b = NULL;
	if (ft_check_final_order(&stack_a, &stack_b) == 1)
		exit(0);
	push_swap(&stack_a, &stack_b);
	//ft_free_stack(&stack_a);
	return (0);
}
