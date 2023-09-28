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

typedef struct Node {
	int x;
	struct Node *next;
} Node;

void  ft_insert_end(Node **root, int value);
int   ft_atoi(const char *nptr);
Node  *ft_stack_builder(int argc, char **argv);
int  swap(Node **head);
int  push_x_to_y(Node **x, Node **y);
int  rotate(Node **head);
int  rerotate(Node **head);
int ft_check_final_order(Node **stack_a, Node **stack_b);

#endif
