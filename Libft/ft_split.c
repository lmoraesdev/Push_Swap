/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:26:12 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/03 16:26:19 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int get_words_number(char const *str, char c)
{
	int d;

	d = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str && (*str != c))
			d++;
		while (*str && (*str != c))
			str++;
	}
	return (d);
}

static int get_word_size(char const *str, char c)
{
	size_t i;

	i = 0;
	while (*str && *str != c)
	{
		i++;
		str++;
	}
	return (i);
}

char **ft_split(char const *s, char c)
{
	char **arr_words;
	size_t word_size;
	size_t i;

	i = 0;
	arr_words = malloc(sizeof(char *) * (get_words_number(s, c) + 1));
	if (!arr_words)
		return (NULL);
	while (*s)
	{
		word_size = get_word_size(s, c);
		if (*s != c)
		{
			arr_words[i] = ft_substr(s, 0, word_size);
			if (!arr_words[i])
				return (NULL);
			s += word_size;
			i++;
		}
		while (*s && (*s == c))
			s++;
	}
	arr_words[i] = NULL;
	return (arr_words);
}
