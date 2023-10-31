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

t_Node	*ft_find_b_num(t_Node *a_num, t_Node **stack_b)
{
	t_Node *curr;
	t_Node *b_num;

	curr = *stack_b;
	b_num = a_num;
	while (curr != NULL)
	{
		if (b_num->x >= a_num->x)
		{
			if ((curr->x > b_num->x) || (curr->x < a_num->x))
				b_num = curr;
		}
		else if (b_num->x < a_num->x)
		{
			if (curr->x < a_num->x && curr->x > b_num->x)
			{
				b_num = curr;
			}
		}

		curr = curr->next;
	}
	return (b_num);
}

void	ft_find_steps(t_Node **stack_a, t_Node **stack_b, t_Node *a_num)
{
	int	arr[4];
	int	i;
	int	j;
	char *move_i;
	char *move_j;
	t_Node *b_num;

	if ((ft_nums_on_stack(stack_a) - a_num->index) < a_num->index)
	{
		arr[0] = ft_nums_on_stack(stack_a) - a_num->index;
		arr[1] = 9; // rra
	}
	else
	{
		arr[0] = a_num->index;
		arr[1] = 6; // ra
	}
	b_num = ft_find_b_num(a_num, stack_b);
	if ((ft_nums_on_stack(stack_b) - b_num->index) < b_num->index)
	{
		j = ft_nums_on_stack(stack_b) - b_num->index;
		move_j = 10; // rrb
	}
	else
	{
		i = b_num->index;
		move_j = 7; // rb
	}

}
