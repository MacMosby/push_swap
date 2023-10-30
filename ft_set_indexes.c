/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_indexes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:57:55 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/10/30 17:57:57 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_indexes(t_Node **stack)
{
	t_Node	*curr;
	int		i;

	if (*stack != NULL)
	{
		curr = *stack;
		i = 0;
		while (curr != NULL)
		{
			curr->index = i;
			i++;
			curr = curr->next;
		}
	}
}
