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

void  push_swap(Node **stack_a, Node **stack_b)
{
  Node *a = *stack_a;
  Node *b = a->next;
  Node *c = b->next;

  while (c->next != NULL)
    c = c->next;
  printf("first element: %d\n", a->x);
  printf("second element: %d\n", b->x);
  printf("last element: %d\n", c->x);
  //while (ft_check_final_order(stack_a, stack_b) == 0)
  int i = 0;
  while (i < 13)
  {
    a = *stack_a;
    b = a->next;
    c = b->next;
    while (c->next != NULL)
      c = c->next;
    if (((a->x > b->x) && (b->x > c->x)) || ((c->x > a->x && a->x > b->x)))
      swap(stack_a);
    else if (((a->x > c->x && c->x > b->x)) || ((b->x > a->x) && (a->x > c->x)))
      rotate(stack_a);
    else
      push_x_to_y(stack_a, stack_b);
    i++;
  }
}

int main(int argc, char **argv)
{
  if (argc == 1)
  {
    printf("give back to prompt");
    exit(-1);
  }
  // call function to setup stack a passing the input
  Node *stack_a = ft_stack_builder(argc, argv);
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
  push_swap(&stack_a, &stack_b);
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
