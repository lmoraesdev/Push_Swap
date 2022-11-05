/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:21:48 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 16:22:01 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = n;
	if (!dest && !src)
		return (0);
	while (n--)
	{
		*(char *)dest = *(char *)src;
		dest++;
		src++;
	}
	return (dest - i);
}
