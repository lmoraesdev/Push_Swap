/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bottom_to_top.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:05:40 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 17:05:46 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate_bottom_to_top_act(t_stack *stack)
{
	t_node *first;
	t_node *last;

	first = stack->top;
	last = stack->begin;
	stack->begin = last->next;
	stack->begin->prev = NULL;
	stack->top = last;
	stack->top->prev = first;
	stack->top->prev->next = last;
	stack->top->next = NULL;
}

void rotate_bottom_to_top(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return;
	if (stack->size == 2)
		swap(stack);
	else
		rotate_bottom_to_top_act(stack);
}
