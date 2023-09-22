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

int  swap(Node **root)
{
  if (*root == NULL)
    return(0);
  Node *curr = *root;
  curr = curr->next;
  if (curr == NULL)
    return (0);
  // swap operation
  Node *first = *root;
  Node *second = curr;
  Node *third = curr->next;
  *root = second;
  second->next = first;
  first->next = third;
  return (0);
}

/* void  push()
{

}

void  rotate()
{

}

void  rerotate()
{

}

void  push_swap(Node *stack_a)
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
  Node *curr = stack_a;
  while (curr != NULL)
  {
    printf("%d\n", curr->x);
    curr = curr->next;
  }
  swap_a(&stack_a);
  // call push swap passing the stacks
  //push_swap(stack_a);
  // printing stack to see if stack_builder function works
  curr = stack_a;
  while (curr != NULL)
  {
    printf("%d\n", curr->x);
    curr = curr->next;
  }
  return (0);
}
