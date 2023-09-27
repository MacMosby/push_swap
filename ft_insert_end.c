/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:55:03 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/09/27 19:55:06 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void  ft_insert_end(Node **root, int value)
{
  Node *new = malloc(sizeof(Node));
  if (!new)
    exit(1);
  new->next = NULL;
  new->x = value;

  if (*root == NULL)
  {
    *root = new;
  }
  else
  {
    Node *curr = *root;
    while (curr->next != NULL && curr->x != value)
      curr = curr->next;
    if (curr->x == value)
    {
      write(1, "Error\n", 6);
      exit(-3);
    }
    curr->next = new;
  }
}
