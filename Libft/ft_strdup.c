/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:27:33 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 16:27:39 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t size;
	char *new_word;

	size = ft_strlen(s);
	new_word = malloc(sizeof(char) * (size + 1));
	if (!new_word)
		return (0);
	size = 0;
	while (s[size] != '\0')
	{
		new_word[size] = s[size];
		size++;
	}
	new_word[size] = '\0';
	return (new_word);
}
