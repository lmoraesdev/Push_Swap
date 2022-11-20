/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:17:38 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/20 18:15:17 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element == NULL)
		return (0);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
