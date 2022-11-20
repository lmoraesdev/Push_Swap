/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:22:11 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/20 18:16:33 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t c)
{
	size_t i;

	i = 0;
	if (!str1 && !str2)
		return (0);
	if (str1 < str2)
	{
		ft_memcpy(str1, str2, c);
	}
	else
	{
		i = c - 1;
		while ((int)i >= 0)
		{
			((char *)str1)[i] = ((char *)str2)[i];
			i--;
		}
	}
	return (str1);
}
