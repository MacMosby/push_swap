/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:50:59 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/09/13 16:51:10 by mrodenbu         ###   ########.fr       */
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

/* void  push_swap(Node *stack_a)
{

} */

int main(int argc, char **argv)
{
  if (argc == 1)
  {
    printf("give back to prompt");
    exit(-1);
  }
  // test input for errors
/*   if ()
  {
    write(1, "Error\n", 6);
    exit(-2);
  } */
  // call function to setup stack a passing the input
  Node *stack_a = stack_builder(argc, argv);
  Node *stack_b = NULL;
  Node *curr;
  curr = stack_a;
  printf("stack a:\n");
  while (curr != NULL)
  {

    printf("%d\n", curr->x);
    curr = curr->next;
  }
  // call push swap passing the stacks
  //push_swap(stack_a);
  // printing stack to see if stack_builder function works
  curr = stack_b;
  printf("stack b:\n");
  while (curr != NULL)
  {
    printf("%d\n", curr->x);
    curr = curr->next;
  }
  rerotate(&stack_a);
  curr = stack_a;
  printf("stack a:\n");
  while (curr != NULL)
  {
    printf("%d\n", curr->x);
    curr = curr->next;
  }
  curr = stack_b;
  printf("stack b:\n");
  while (curr != NULL)
  {
    printf("%d\n", curr->x);
    curr = curr->next;
  }
  return (0);
}
