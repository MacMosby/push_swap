/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_num_of_steps.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:33:41 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/10/31 13:33:43 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_steps(t_Node **stack_a, t_Node **stack_b, t_Node *curr)
{
	int	i;
	int	j;
	char *move_i;

	if ((ft_nums_on_stack(stack_a) - curr->index) < curr->index)
	{
		i = ft_nums_on_stack(stack_a) - curr->index;
		move_i = "rra";
	}
	else
	{
		i = curr->index;
		move_i = "ra";
	}


}
