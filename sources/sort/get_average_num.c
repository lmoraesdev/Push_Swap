/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_average_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:10:33 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 17:10:49 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int return_average(int *arr, int size, int flag)
{
	int average;

	if (flag == 0)
	{
		if (size % 2 == 0)
			average = arr[(size / 2)];
		else
			average = arr[(size / 2) + 1];
	}
	else
	{
		if (size % 2 == 0)
			average = arr[(size / 2) - 1];
		else
			average = arr[(size / 2)];
	}
	free(arr);
	return (average);
}

static int sort_array(int *arr, int size, int flag)
{
	int i;
	int j;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (return_average(arr, size, flag));
}

static int fill_array(t_stack *stack, int size, int flag)
{
	int *arr;
	int index;
	t_node *aux;

	arr = malloc(size * sizeof(int *));
	aux = stack->top;
	index = 0;
	while (index < size)
	{
		arr[index] = aux->value;
		index++;
		aux = aux->prev;
	}
	return (sort_array(arr, size, flag));
}

int get_average_num(t_stack *stack, int size, int flag)
{
	int average;

	average = fill_array(stack, size, flag);
	return (average);
}
