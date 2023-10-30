/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 00:45:04 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/10/19 00:45:08 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm()
{
	// if 5 or more numbers in stack a
	if (ft_nums_on_stack(stack_a) > 4)
		// push two numbers from stack a to stack b and sort them the right way (bigger one on top)
		push_x_to_y(stack_a, stack_b);
		push_x_to_y(stack_a, stack_b);
		if (stack_b->x < stack_b->next->x)
			swap(stack_b);
		// while more than 3 numbers in stack a
		while (nums_on_stack(stack_a) > 0)
			// set indexes
			ft_set_indexes(stack_a);
			ft_set_indexes(stack_b);
			// looping over stack a
				// find number w/ minumum number of moves to put in right position

					// find num of steps to bring element to top of stack a
					// find num of steps to arrange stack b
					// plus one move (push a to b)
			// move number in right position
		// get all numbers from stack b to stack a
		while (ft_nums_on_stack(stack_b) > 0)
			push_x_to_y(stack_b, stack_a);

}
