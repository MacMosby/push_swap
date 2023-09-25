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

int	ft_atoi(const char *nptr)
{
	int	i;
	long	res;
	int	minus;

	i = 0;
	res = 0;
	minus = 0;
	if (nptr[i] == 45)
	{
		minus = 1;
		i++;
	}
	else if (nptr[i] == 43)
		i++;
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		res *= 10;
		res += (int)nptr[i] - 48;
		i++;
	}
	if (minus % 2 == 1)
		res *= (-1);
  if (nptr[i] == 0 && res >= -2147483648 && res <= 2147483647)
	  return (res);
  else
  {
    write(1, "Error\n", 6);
    exit(-2);
  }
}

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

Node  *stack_builder(int argc, char **argv)
{
  int i = 1;
  Node *stack_a = NULL;

  while (i < argc)
  {
    int num = ft_atoi(argv[i]);
    //printf("%d\n", num);
    insert_end(&stack_a, num);
    i++;
  }
  return(stack_a);
}
