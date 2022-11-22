/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_ascending.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:11:16 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/21 22:41:31 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_asceding(t_stack *stack)
{
	t_node	*aux;

	if (!stack || stack->size == 0)
		return (1);
	aux = stack->top;
	while (aux->prev)
	{
		if (aux->value > aux->prev->value)
			return (0);
		aux = aux->prev;
	}
	return (1);
}
