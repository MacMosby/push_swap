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
			rotate_a(stack);
		}
		else if (moves[1] == 9)
		{
			rerotate_a(stack);
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
		if (moves[3] == 7)
		{
			rotate_b(stack);
		}
		else if (moves[3] == 10)
		{
			rerotate_b(stack);
		}
		i++;
	}
}

void	ft_execute_moves(int *moves, t_Node **stack_a, t_Node **stack_b)
{
	ft_moves_a(moves, stack_a);
	ft_moves_b(moves, stack_b);
	push_a_to_b(stack_a, stack_b);
}
