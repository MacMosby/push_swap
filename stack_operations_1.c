/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:18:12 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/16 19:28:41 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_Node **head)
{
	t_Node	*curr;
	t_Node	*first;
	t_Node	*second;
	t_Node	*third;

	if (*head == NULL)
		return (0);
	curr = *head;
	curr = curr->next;
	if (curr == NULL)
		return (0);
	first = *head;
	second = curr;
	third = curr->next;
	*head = second;
	second->next = first;
	first->next = third;
	write(1, "sa\n", 3);
	return (0);
}

int	push_a_to_b(t_Node **x, t_Node **y)
{
	t_Node	*x_first;
	t_Node	*x_second;
	t_Node	*y_first;

	if (*x == NULL)
		return (0);
	x_first = *x;
	x_second = x_first->next;
	*x = x_second;
	y_first = *y;
	x_first->next = y_first;
	*y = x_first;
	write(1, "pb\n", 3);
	return (0);
}

int	push_b_to_a(t_Node **x, t_Node **y)
{
	t_Node	*x_first;
	t_Node	*x_second;
	t_Node	*y_first;

	if (*x == NULL)
		return (0);
	x_first = *x;
	x_second = x_first->next;
	*x = x_second;
	y_first = *y;
	x_first->next = y_first;
	*y = x_first;
	write(1, "pa\n", 3);
	return (0);
}
