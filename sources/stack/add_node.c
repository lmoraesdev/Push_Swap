/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:18:04 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/20 18:08:58 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void add_node(t_stack *stack, int value)
{
	t_node *node;

	if (!stack)
		return;
	node = node_create(value);
	if (!node)
		return;
	if (stack->size == 0)
	{
		stack->top = node;
		stack->begin = node;
	}
	else
	{
		stack->top->next = node;
		node->prev = stack->top;
		stack->top = node;
	}
	stack->size++;
}
