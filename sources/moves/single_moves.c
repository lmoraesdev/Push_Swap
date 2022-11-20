/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:06:58 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/20 18:05:31 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void single_swap(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return;
	if (stack->name == 'a')
		write(1, "sa\n", 3);
	else if (stack->name == 'b')
		write(1, "sb\n", 3);
	swap(stack);
}

void single_rotate_top_to_bottom(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return;
	if (stack->name == 'a')
		write(1, "ra\n", 3);
	else if (stack->name == 'b')
		write(1, "rb\n", 3);
	rotate_top_to_bottom(stack);
}

void single_rotate_bottom_to_top(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return;
	if (stack->name == 'a')
		write(1, "rra\n", 4);
	else if (stack->name == 'b')
		write(1, "rrb\n", 4);
	rotate_bottom_to_top(stack);
}
