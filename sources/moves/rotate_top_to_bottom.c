/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_top_to_bottom.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:06:20 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/21 23:11:42 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_top_to_bottom_act(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	first = stack->top;
	last = stack->begin;
	stack->top = first->prev;
	stack->begin = first;
	stack->begin->next = last;
	stack->begin->next->prev = first;
	stack->top->next = NULL;
	stack->begin->prev = NULL;
}

void	rotate_top_to_bottom(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return ;
	if (stack->size == 2)
		swap(stack);
	else
		rotate_top_to_bottom_act(stack);
}
