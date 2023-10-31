/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute_moves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:25:42 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/10/31 17:25:45 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execute_moves(int *moves, t_Node **stack_a, t_Node **stack_b)
{
	int i;

	i = 0;
	while (i < moves[0])
	{
		if (moves[1] == 6)
		{
			printf("ra");
			rotate(stack_a);
		}
		else if (moves[1] == 9)
		{
			printf("rra");
			rerotate(stack_a);
		}
		i++;
	}
	i = 0;
	while (i < moves[2])
	{
		if (moves[1] == 7)
		{
			printf("rb");
			rotate(stack_a);
		}
		else if (moves[1] == 10)
		{
			printf("rrb");
			rerotate(stack_a);
		}
		i++;
	}
}
