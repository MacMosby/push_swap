/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_builder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:54:41 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/16 16:57:26 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node	*ft_stack_builder(int argc, char **argv)
{
	int		i;
	int		num;
	t_Node	*stack_a;

	i = 1;
	stack_a = NULL;
	while (i < argc + 1)
	{
		num = ft_atoi(argv[i]);
		ft_insert_end(&stack_a, num);
		i++;
	}
	return (stack_a);
}
