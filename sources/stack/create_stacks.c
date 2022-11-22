/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stacks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:21:15 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/21 23:13:22 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	*create_stacks(void)
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(t_stacks));
	if (!stacks)
		return (0);
	stacks->stack_a = stack_create('a');
	if (!stacks->stack_a)
	{
		free(stacks);
		return (0);
	}
	stacks->stack_b = stack_create('b');
	if (!stacks->stack_b)
	{
		stack_clean(stacks->stack_a);
		free(stacks);
		return (0);
	}
	return (stacks);
}
