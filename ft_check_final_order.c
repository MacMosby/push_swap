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

int ft_check_final_order(Node **stack_a, Node **stack_b)
{
  Node *head_b = *stack_b;
  Node *curr = *stack_a;

  if (head_b != NULL)
    return (0);
  while (curr->next != NULL && curr->x < curr->next->x)
    curr = curr->next;
  if (curr->next == NULL)
    return (1);
  return (0);
}
