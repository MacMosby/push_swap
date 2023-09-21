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

/* void  swap_a()
{

}

void  swap_b()
{

}

void  swap_swap()
{
  swap_a()
  swap_b()
}

void  push_a()
{

}

void  push_b()
{

}

void  rotate_a()
{

}

void  rotate_b()
{

}

void  rotate_rotate()
{
  rotate_a()
  rotate_b()
}

void  rerotate_a()
{

}

void  rerotate_b()
{

}

void  rerotate_rerotate()
{
  rerotate_a()
  rerotate_b()
}

void  push_swap()
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
  if (ft_atoi(argv[1]) != 2)
  {
    write(1, "Error\n", 6);
    exit(-2);
  }
  // call function to setup stacks passing the input
  Node *curr = stack_builder(argc, argv);
  // call push swap passing the stacks
  while (curr != NULL)
  {
    //printf("%d\n", curr->x);
    curr = curr->next;
  }
  return (0);
}
