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

void	ft_moves_a(int *moves, t_Node **stack)
{
	int	i;

	i = 0;
	while (i < moves[0])
	{
		if (moves[1] == 6)
		{
			printf("ra");
			rotate(stack);
		}
		else if (moves[1] == 9)
		{
			printf("rra");
			rerotate(stack);
		}
		i++;
	}
}

void	ft_moves_b(int *moves, t_Node **stack)
{
	int	i;

	i = 0;
	while (i < moves[2])
	{
		if (moves[1] == 7)
		{
			printf("rb");
			rotate(stack);
		}
		else if (moves[1] == 10)
		{
			printf("rrb");
			rerotate(stack);
		}
		i++;
	}
}

void	ft_execute_moves(int *moves, t_Node **stack_a, t_Node **stack_b)
{
	ft_moves_a(moves, stack_a);
	ft_moves_b(moves, stack_b);
}