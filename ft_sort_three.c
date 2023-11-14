/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:29:03 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/14 15:29:05 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_Node **a)
{
	t_Node	*top;
	t_Node	*mid;
	t_Node	*btm;

	top = *a;
	mid = top->next;
	btm = mid->next;
	if (top->x > mid->x && mid->x > btm->x)
	{
		swap(a);
		rerotate(a);
	}
	else if (top->x > btm->x && btm->x > mid->x)
		rotate(a);
	else if (mid->x > top->x && top->x > btm->x)
		rerotate(a);
	else if (btm->x > top->x && top->x > mid->x)
		swap(a);
	else if (mid->x > btm->x && btm->x > top->x)
	{
		swap(a);
		rotate(a);
	}
}
