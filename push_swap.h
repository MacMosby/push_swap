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

void  insert_end(Node **root, int value);
int   ft_atoi(const char *nptr);
Node  *stack_builder(int argc, char **argv);

#endif
