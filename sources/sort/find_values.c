/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_values.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:09:59 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 17:10:11 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_smallest(t_stack *stack)
{
	t_node *aux;
	int i;

	aux = stack->top;
	i = aux->value;
	while (aux != NULL)
	{
		if (aux->value < i)
			i = aux->value;
		aux = aux->prev;
	}
	return (i);
}

int find_highest(t_stack *stack)
{
	t_node *aux;
	int i;

	aux = stack->top;
	i = aux->value;
	while (aux)
	{
		if (aux->value > i)
			i = aux->value;
		aux = aux->prev;
	}
	return (i);
}
