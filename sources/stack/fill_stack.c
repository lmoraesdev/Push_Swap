/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:21:54 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/05 00:29:24 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void fill_stack(char **argv, int argc, t_stacks *stacks)
{
	while (argc-- > 1)
	{
		if (ft_strlen(argv[argc]) < 11)
			add_node(stacks->stack_a, ft_atoi(argv[argc]));
		else
		{
			stack_clean(stacks->stack_b);
			stack_clean(stacks->stack_b);
			free(stacks);
			ft_putendl_fd("Error", 2);
			exit(EXIT_FAILURE);
		}
	}
}
