/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:53:03 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/09/20 15:53:06 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct t_Node {
	int				x;
	struct t_Node	*next;
}	t_Node;

void	ft_insert_end(t_Node **root, int value);
int		ft_atoi(const char *nptr);
t_Node	*ft_stack_builder(int argc, char **argv);
int		swap(t_Node **head);
int		push_x_to_y(t_Node **x, t_Node **y);
int		rotate(t_Node **head);
int		rerotate(t_Node **head);
int		ft_check_final_order(t_Node **stack_a, t_Node **stack_b);

#endif
