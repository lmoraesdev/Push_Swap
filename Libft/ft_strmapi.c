/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:31:17 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/20 18:19:49 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *new_str;
	unsigned int n;

	n = 0;
	if (!s)
		return (0);
	new_str = ft_strdup(s);
	if (!new_str)
		return (0);
	while (new_str[n])
	{
		new_str[n] = f(n, new_str[n]);
		n++;
	}
	return (new_str);
}
