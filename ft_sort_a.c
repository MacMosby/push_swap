/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:45:46 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/03 18:45:48 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node	*ft_find_min(t_Node **stack)
{
	t_Node	*curr;
	t_Node	*min;

	min = *stack;
	curr = *stack;
	while (curr != NULL)
	{
		if (curr->x < min->x)
			min = curr;
		curr = curr->next;
	}
	return (min);
}

void	ft_rotate_a(t_Node **stack, int move, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (move == 6)
		{
			rotate_a(stack);
		}
		else
		{
			rerotate_a(stack);
		}
		i++;
	}
}

void	ft_sort_a(t_Node **stack)
{
	t_Node	*min;
	int		move;
	int		count;

	min = ft_find_min(stack);
	if ((ft_nums_on_stack(stack) - min->index) < min->index)
	{
		move = 9;
		count = ft_nums_on_stack(stack) - min->index;
	}
	else
	{
		move = 6;
		count = min->index;
	}
	ft_rotate_a(stack, move, count);
}
