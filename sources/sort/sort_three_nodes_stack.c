/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_nodes_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:16:52 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/21 22:39:24 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three_nodes_stack(t_stack *stack)
{
	int	begin;
	int	middle;
	int	top;

	begin = stack->begin->value;
	middle = stack->begin->next->value;
	top = stack->top->value;
	if (middle == find_smallest(stack) && begin == find_highest(stack))
		single_swap(stack);
	else if (top == find_highest(stack) && begin == find_smallest(stack))
	{
		single_swap(stack);
		single_rotate_bottom_to_top(stack);
	}
	else if (top == find_highest(stack) && middle == find_smallest(stack))
		single_rotate_top_to_bottom(stack);
	else if (top == find_smallest(stack) && middle == find_highest(stack))
	{
		single_swap(stack);
		single_rotate_top_to_bottom(stack);
	}
	else if (begin == find_smallest(stack) && middle == find_highest(stack))
		single_rotate_bottom_to_top(stack);
}
