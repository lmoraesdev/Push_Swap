/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:45:28 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/21 23:15:04 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVES_H
# define MOVES_H

void	swap(t_stack *stack);
void	rotate_top_to_bottom(t_stack *stack);
void	rotate_bottom_to_top(t_stack *stack);
void	push(t_stack *src, t_stack *dst);
void	single_rotate_bottom_to_top(t_stack *stack);
void	single_rotate_top_to_bottom(t_stack *stack);
void	single_swap(t_stack *stack);
void	double_rotate_top_to_bottom(t_stacks *stacks);
void	double_rotate_bottom_to_top(t_stacks *stacks);
void	ouble_swap(t_stacks *stacks);
#endif
