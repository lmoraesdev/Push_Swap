/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:07:43 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/20 18:05:45 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void simple_swap(t_stack *stack)
{
	stack->top = stack->top->prev;
	stack->begin = stack->begin->next;
	stack->top->next = NULL;
	stack->top->prev = stack->begin;
	stack->begin->next = stack->top;
	stack->begin->prev = NULL;
}

static void complex_swap(t_stack *stack)
{
	t_node *first;
	t_node *second;
	t_node *third;

	first = stack->top;
	second = stack->top->prev;
	third = stack->top->prev->prev;
	stack->top = second;
	second->next = NULL;
	second->prev = first;
	first->next = second;
	first->prev = third;
	third->next = first;
}

void swap(t_stack *stack)
{
	if (!stack || stack->size < 2)
		return;
	if (stack->size == 2)
		simple_swap(stack);
	else
		complex_swap(stack);
}
