/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nums_on_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:04:59 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/10/30 17:05:04 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nums_on_stack(t_Node **stack)
{
	t_Node *curr;
	int count;

	if (*stack == NULL)
		return (0);
	curr = *stack;
	count = 1;
	while (curr-> next != NULL)
	{
		count += 1;
		curr = curr->next;
	}
	return (count);
}
