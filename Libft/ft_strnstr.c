/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:33:45 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 16:34:00 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t leng;

	leng = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (*big && leng <= len--)
	{
		if (ft_strncmp(big, little, leng) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
