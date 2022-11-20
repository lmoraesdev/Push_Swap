/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:53:39 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/20 18:10:30 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void call_algo(t_stacks *stacks, int size)
{
	if (!is_sorted_asceding(stacks->stack_a))
	{
		if (size == 3)
			sort_three_nodes_stack(stacks->stack_a);
		else if (size == 4)
			sort_four_nodes_stack(stacks);
		else if (size == 5)
			sort_five_nodes_stack(stacks->stack_a, stacks->stack_b);
		else
			recursion_sort_a(stacks, stacks->stack_a->size, 0);
	}
}

int main(int argc, char **argv)
{
	t_stacks *stacks;

	check_arguments(argv, argc);
	if (argc < 2)
		return (0);
	stacks = create_stacks();
	fill_stack(argv, argc, stacks);
	call_algo(stacks, stacks->stack_a->size);
	clean_struct(stacks);
}
