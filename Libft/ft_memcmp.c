/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:21:34 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 16:21:43 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	if (!str1 && !str2)
		return (0);
	while (n--)
	{
		if (*(char *)str1 != *(char *)str2)
		{
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		}
		str1++;
		str2++;
	}
	return (0);
}
