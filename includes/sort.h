/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:45:36 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/21 23:22:40 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

typedef struct s_sort
{
	int	first;
	int	second;
	int	third;
	int	index;
}	t_sort;

int		is_sorted_asceding(t_stack *stack);
int		is_sorted_descending(t_stack *stack);
void	recursion_sort_a(t_stacks *stacks, int block_size, int rotated);
void	recursion_sort_b(t_stacks *stacks, int block_size, int rotated);
int		get_average_num(t_stack *stack, int size, int flag);
void	sort_three_nodes(t_stacks *stacks);
void	sort_two_at_top(t_stacks *stacks);
void	sort_two_at_top_b(t_stacks *stacks);
void	sort_three_at_top_b(t_stacks *stacks);
void	sort_three_nodes_stack(t_stack *stack);
int		find_smallest(t_stack *stack);
int		find_highest(t_stack *stack);
void	sort_five_nodes_stack(t_stack *stack_a, t_stack *stack_b);
void	sort_four_nodes_stack(t_stacks *stacks);

#endif
