/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_struct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:20:47 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/20 18:09:08 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void clean_struct(t_stacks *stacks)
{
	stack_clean(stacks->stack_a);
	stack_clean(stacks->stack_b);
	free(stacks);
}
