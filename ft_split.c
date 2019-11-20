/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:45:07 by jchene            #+#    #+#             */
/*   Updated: 2019/11/20 21:15:04 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_of_words(const char *str, char c)
{
	int count;
	int	word;
	int i;

	count = 0;
	word = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] != c && word == 0)
			word = 1;
		else if (str[i] == c)
		{
			if (word)
				count++;
			word = 0;
		}
	}
	if (word)
		count++;
	return (count);
}

static int	word_size(const char *str, char c)
{
	int size;

	size = 0;
	while (*str != c && *str)
	{
		str++;
		size++;
	}
	return (size);
}

char		**ft_split(const char *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		nb_words;
	int		word_len;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	nb_words = nbr_of_words(str, c);
	if (!(tab = (char **)ft_calloc(sizeof(char *), nb_words + 1)))
		return (NULL);
	while (i < nb_words)
	{
		while (str[j] == c && str[j])
			j++;
		word_len = word_size(&str[j], c);
		if (!(tab[i] = (char *)ft_calloc(sizeof(char), word_len + 1)))
			return (NULL);
		ft_strlcpy(&tab[i++][0], &str[j], word_len + 1);
		j += word_len;
	}
	tab[i] = NULL;
	return (tab);
}
