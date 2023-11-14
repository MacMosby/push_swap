/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_less_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:28:45 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/14 15:28:48 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_min_to_b(t_Node **a, t_Node **b)
{
	t_Node	*min;
	int		count;
	int		i;

	min = ft_find_min(a);
	i = 0;
	ft_set_indexes(a);
	if ((ft_nums_on_stack(a) - min->index) < min->index)
	{
		count = ft_nums_on_stack(a) - min->index;
		while (i < count)
		{
			rerotate_a(a);
			i++;
		}
	}
	else
	{
		count = min->index;
		while (i < count)
		{
			rotate_a(a);
			i++;
		}
	}
	push_a_to_b(a, b);
	ft_set_indexes(a);
}

void	ft_less_numbers(t_Node **a, t_Node **b)
{
	if (ft_nums_on_stack(a) == 5)
		ft_push_min_to_b(a, b);
	if (ft_nums_on_stack(a) > 3)
		ft_push_min_to_b(a, b);
	if (ft_nums_on_stack(a) == 3)
		ft_sort_three(a);
	else //we only get here if the order is not correct in the beginning
		swap(a);
}
