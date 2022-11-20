/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:00:11 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/20 18:04:11 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void double_swap(t_stacks *stacks)
{
	if (!stacks || !stacks->stack_a || !stacks->stack_a)
		return;
	swap(stacks->stack_a);
	swap(stacks->stack_b);
	write(1, "ss\n", 3);
}

void double_rotate_top_to_bottom(t_stacks *stacks)
{
	if (!stacks || !stacks->stack_a || !stacks->stack_a)
		return;
	rotate_top_to_bottom(stacks->stack_a);
	rotate_top_to_bottom(stacks->stack_b);
	write(1, "rr\n", 3);
}

void double_rotate_bottom_to_top(t_stacks *stacks)
{
	if (!stacks || !stacks->stack_a || !stacks->stack_a)
		return;
	rotate_bottom_to_top(stacks->stack_a);
	rotate_bottom_to_top(stacks->stack_b);
	write(1, "rrr\n", 4);
}
