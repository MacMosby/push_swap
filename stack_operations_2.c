/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:18:12 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/16 19:29:01 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
