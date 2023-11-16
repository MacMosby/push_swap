/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:47:54 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/16 15:46:21 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_Node **stack)
{
	t_Node	*last;
	t_Node	*curr;

	last = *stack;
	curr = last->next;
	while (curr != NULL)
	{
		free(last);
		last = curr;
		curr = curr->next;
	}
	free(last);
}
