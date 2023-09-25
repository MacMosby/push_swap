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

int  swap(Node **head)
{
  if (*head == NULL)
    return(0);
  Node *curr = *head;
  curr = curr->next;
  if (curr == NULL)
    return (0);
  Node *first = *head;
  Node *second = curr;
  Node *third = curr->next;
  *head = second;
  second->next = first;
  first->next = third;
  return (0);
}

int  push_x_to_y(Node **x, Node **y)
{
  if (*x == NULL)
    return (0);
  Node *x_first = *x;
  Node *x_second = x_first->next;
  *x = x_second;
  Node *y_first = *y;
  x_first->next = y_first;
  *y = x_first;
  return (0);
}

int  rotate(Node **head)
{
  if (*head == NULL)
    return (0);
  Node *first = *head;
  Node *second = first->next;
  if (second == NULL)
    return(0);
  *head = second;
  Node *curr = first;
  while (curr->next != NULL)
    curr = curr->next;
  curr->next = first;
  first->next = NULL;
  return (0);
}

int  rerotate(Node **head)
{
  if (*head == NULL)
    return (0);
  Node *first = *head;
  Node *second = first->next;
  if (second == NULL)
    return (0);
  Node *curr = *head;
  while (curr->next->next != NULL)
    curr = curr->next;
  Node *new_end = curr;
  curr = curr->next;
  curr->next = first;
  *head = curr;
  new_end->next = NULL;
  return (0);
}
