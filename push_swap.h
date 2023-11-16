/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:53:03 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/11/16 15:56:58 by marcrodenbu      ###   ########.fr       */
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
	int				index;
}	t_Node;

void	ft_insert_end(t_Node **root, int value);
int		ft_atoi(const char *nptr);
t_Node	*ft_stack_builder(int argc, char **argv);
int		swap(t_Node **head);
int		push_a_to_b(t_Node **x, t_Node **y);
int		push_b_to_a(t_Node **x, t_Node **y);
int		rotate_a(t_Node **head);
int		rotate_b(t_Node **head);
int		rerotate_a(t_Node **head);
int		rerotate_b(t_Node **head);
int		ft_check_final_order(t_Node **stack_a, t_Node **stack_b);
int		ft_nums_on_stack(t_Node **stack);
void	ft_set_indexes(t_Node **stack);
int		*ft_find_steps(t_Node **a, t_Node **b, t_Node *a_num, t_Node *b_num);
t_Node	*ft_find_b_num(t_Node *a_num, t_Node **stack_b);
void	ft_execute_moves(int *moves, t_Node **stack_a, t_Node **stack_b);
void	ft_sort_a(t_Node **stack);
t_Node	*ft_find_min(t_Node **stack);
void	ft_sort_three(t_Node **a);
void	ft_less_numbers(t_Node **a, t_Node **b);
int		ft_get_word_count(char *s);
void	ft_free_stack(t_Node **stack);
char	**ft_split(char *str);

#endif
