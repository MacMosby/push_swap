/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:18:12 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/09/22 17:18:15 by mrodenbu         ###   ########.fr       */
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

int	rotate_a(t_Node **head)
{
	t_Node	*first;
	t_Node	*second;
	t_Node	*curr;

	if (*head == NULL)
		return (0);
	first = *head;
	second = first->next;
	if (second == NULL)
		return (0);
	*head = second;
	curr = first;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
	return (0);
}

int	rotate_b(t_Node **head)
{
	t_Node	*first;
	t_Node	*second;
	t_Node	*curr;

	if (*head == NULL)
		return (0);
	first = *head;
	second = first->next;
	if (second == NULL)
		return (0);
	*head = second;
	curr = first;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = first;
	first->next = NULL;
	write(1, "rb\n", 3);
	return (0);
}

int	rerotate_a(t_Node **head)
{
	t_Node	*first;
	t_Node	*second;
	t_Node	*curr;
	t_Node	*new_end;

	if (*head == NULL)
		return (0);
	first = *head;
	second = first->next;
	if (second == NULL)
		return (0);
	curr = *head;
	while (curr->next->next != NULL)
		curr = curr->next;
	new_end = curr;
	curr = curr->next;
	curr->next = first;
	*head = curr;
	new_end->next = NULL;
	write(1, "rra\n", 4);
	return (0);
}

int	rerotate_b(t_Node **head)
{
	t_Node	*first;
	t_Node	*second;
	t_Node	*curr;
	t_Node	*new_end;

	if (*head == NULL)
		return (0);
	first = *head;
	second = first->next;
	if (second == NULL)
		return (0);
	curr = *head;
	while (curr->next->next != NULL)
		curr = curr->next;
	new_end = curr;
	curr = curr->next;
	curr->next = first;
	*head = curr;
	new_end->next = NULL;
	write(1, "rrb\n", 4);
	return (0);
}
