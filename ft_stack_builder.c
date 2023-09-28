/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_builder.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:54:41 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/09/27 19:54:45 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

Node  *ft_stack_builder(int argc, char **argv)
{
  int i = 1;
  Node *stack_a = NULL;

  while (i < argc)
  {
    int num = ft_atoi(argv[i]);
    //printf("%d\n", num);
    ft_insert_end(&stack_a, num);
    i++;
  }
  return(stack_a);
}
