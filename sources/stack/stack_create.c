/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:23:29 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/05 00:29:58 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *stack_create(char name)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->name = name;
	stack->top = NULL;
	stack->begin = NULL;
	stack->size = 0;
	return (stack);
}
