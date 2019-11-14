/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:45:07 by jchene            #+#    #+#             */
/*   Updated: 2019/11/14 21:22:18 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbr_of_words(char *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && str[i])
		{
			while (str[i] != c && str[i])
				i++;
			count++;
		}
		i++;
	}
	return (count);
}

int		word_size(char *str, char c)
{
	int size;

	size = 0;
	while (*str != c && *str)
	{
		str++;
		size++;
	}
	return (size + 1);
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(str))
		return (NULL);
	if (!(tab = malloc(sizeof(char *) * (nbr_of_words((char *)str, c) + 1))))
		return (NULL);
	while (*str)
	{
		if (*str != c && *str)
		{
			if (!(tab[i] = malloc(sizeof(char) * (word_size((char *)str, c)))))
				return (NULL);
			while (*str != c && *str)
				tab[i][j++] = *(str++);
			tab[i++][j] = '\0';
			j = 0;
		}
		str++;
	}
	tab[i] = NULL;
	return (tab);
}
