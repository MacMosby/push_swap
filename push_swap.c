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

void	push_swap(t_Node **stack_a, t_Node **stack_b)
{
	t_Node	*a;
	t_Node	*b;
	t_Node	*c;
	int		i;

	ft_set_indexes(stack_a);
	ft_set_indexes(stack_b);
	//while (ft_check_final_order(stack_a, stack_b) == 0)
	i = 0;
	while (i < 13)
	{
		a = *stack_a;
		b = a->next;
		c = b->next;
		while (c->next != NULL)
			c = c->next;
		if (((a->x > b->x) && (b->x > c->x)) || ((c->x > a->x && a->x > b->x)))
			swap(stack_a);
		else if (((a->x > c->x && c->x > b->x)) || ((b->x > a->x) && (a->x > c->x)))
			rotate(stack_a);
		else if (((b->x > c->x) && (c->x > a->x)) || ((c->x > b->x) && (b->x > a->x)))
			push_x_to_y(stack_a, stack_b);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_Node	*stack_a;
	t_Node	*stack_b;
	t_Node	*curr;

	if (argc == 1)
	{
		printf("give back to prompt");
		exit(-1);
	}
	// call function to setup stack a passing the input
	stack_a = ft_stack_builder(argc, argv);
	stack_b = NULL;
	curr = stack_a;
	printf("stack a:\n");
	while (curr != NULL)
	{
		printf("num: %d, index: %d\n", curr->x, curr->index);
		curr = curr->next;
	}
	// call push swap passing the stacks
	//push_swap(stack_a);
	// printing stack to see if stack_builder function works
	curr = stack_b;
	printf("stack b:\n");
	while (curr != NULL)
	{
		printf("num: %d, index: %d\n", curr->x, curr->index);
		curr = curr->next;
	}
	printf("BEFORE");
	push_swap(&stack_a, &stack_b);
	printf("AFTER");
	curr = stack_a;
	printf("stack a:\n");
	while (curr != NULL)
	{
		printf("num: %d, index: %d\n", curr->x, curr->index);
		curr = curr->next;
	}
	curr = stack_b;
	printf("stack b:\n");
	while (curr != NULL)
	{
		printf("num: %d, index: %d\n", curr->x, curr->index);
		curr = curr->next;
	}
	return (0);
}
