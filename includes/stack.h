/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:45:39 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/21 23:22:16 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct s_node
{
	int						value;
	struct s_node			*next;
	struct s_node			*prev;

}	t_node;

typedef struct s_stack
{
	t_node		*top;
	t_node		*begin;
	int			size;
	char		name;
}	t_stack;

typedef struct s_stacks
{
	t_stack	*stack_a;
	t_stack	*stack_b;
}	t_stacks;

t_stack		*stack_create(char name);
void		stack_clean(t_stack *stack);
t_node		*node_create(int value);
void		add_node(t_stack *stack, int value);
t_stacks	*create_stacks(void);
void		clean_struct(t_stacks *stacks);
void		fill_stack(char **argv, int argc, t_stacks *stacks);
#endif
