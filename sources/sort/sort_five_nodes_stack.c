/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_nodes_stack.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:16:33 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 17:16:38 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_five_nodes_stack(t_stack *stack_a, t_stack *stack_b)
{
	int average;

	average = get_average_num(stack_a, stack_a->size, 1);
	while (stack_a->size > 3)
	{
		if (stack_a->top->value < average)
			push(stack_a, stack_b);
		else
			single_rotate_top_to_bottom(stack_a);
	}
	sort_three_nodes_stack(stack_a);
	if (stack_b->top->value < stack_b->begin->value)
		single_swap(stack_b);
	while (stack_b->size > 0)
		push(stack_b, stack_a);
}
