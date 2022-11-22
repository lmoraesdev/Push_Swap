/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_clean.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:22:54 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/21 23:13:49 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_clean(t_stack *stack)
{
	t_node	*aux;
	t_node	*tmp;

	if (!stack)
		return ;
	aux = stack->top;
	while (aux)
	{
		tmp = aux->prev;
		free(aux);
		aux = tmp;
	}
	free(stack);
}
