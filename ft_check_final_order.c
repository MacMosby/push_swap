/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_final_order.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:58:40 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/09/27 19:58:42 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_final_order(t_Node **stack_a, t_Node **stack_b)
{
	t_Node	*head_b;
	t_Node	*curr;

	head_b = *stack_b;
	curr = *stack_a;
	if (head_b != NULL)
		return (0);
	while (curr->next != NULL && curr->x < curr->next->x)
		curr = curr->next;
	if (curr->next == NULL)
		return (1);
	return (0);
}
