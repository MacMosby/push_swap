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
	t_Node	*curr;
	t_Node	*b_num;

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
	if (b_num == a_num)
		exit(1);
	return (b_num);
}

int	*ft_find_steps(t_Node **a, t_Node **b, t_Node *a_num, t_Node *b_num)
{
	int		*arr;

	arr = malloc(4 * sizeof(int));
	if ((ft_nums_on_stack(a) - a_num->index) < a_num->index)
	{
		arr[0] = ft_nums_on_stack(a) - a_num->index;
		arr[1] = 9;
	}
	else
	{
		arr[0] = a_num->index;
		arr[1] = 6;
	}
	b_num = ft_find_b_num(a_num, b);
	if ((ft_nums_on_stack(b) - b_num->index) < b_num->index)
	{
		arr[2] = ft_nums_on_stack(b) - b_num->index;
		arr[3] = 10;
	}
	else
	{
		arr[2] = b_num->index;
		arr[3] = 7;
	}
	return (arr);
}
