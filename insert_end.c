/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:56:50 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/09/20 16:56:52 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  insert_end(Node **root, int value)
{
  Node *new = malloc(sizeof(Node));
  if (!new)
    exit(1);
  new->next = NULL;
  new->x = value;

  if (*root == NULL)
  {
    *root = new;
    return();
  }

  Node *curr = *root;
  while (curr->next != NULL)
    curr = curr->next;
  curr->next = new;
}
