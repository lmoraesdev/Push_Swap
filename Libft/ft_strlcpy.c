/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:30:44 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 16:30:50 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t leng;
	size_t new_size;

	leng = 0;
	new_size = size - 1;
	if (size)
	{
		while (*src && new_size--)
		{
			*dest = *(unsigned char *)src;
			dest++;
			src++;
			leng++;
		}
		*dest = '\0';
	}
	while (*src)
	{
		leng++;
		src++;
	}
	return (leng);
}
