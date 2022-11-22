/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbatista <lbatista@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:11:49 by lbatista          #+#    #+#             */
/*   Updated: 2022/11/21 23:38:40 by lbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		return (size = 1);
	if (n == -2147483648)
	{
		return (size = 11);
	}
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	*nbr(long int n, char *new_string, size_t size)
{
	if (n < 0)
	{
		new_string[0] = '-';
		n *= -1;
	}
	size--;
	if (n >= 10)
		nbr((n / 10), new_string, size);
	new_string[size] = (n % 10) + '0';
	return (new_string);
}

char	*ft_itoa(int n)
{
	char		*new_word;
	size_t		size;
	long int	n2;

	n2 = n;
	size = get_size(n);
	new_word = malloc(sizeof(char) * (size + 1));
	if (!new_word)
		return (NULL);
	new_word[size] = '\0';
	nbr(n2, new_word, size);
	return (new_word);
}
