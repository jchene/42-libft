/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:25:59 by jchene            #+#    #+#             */
/*   Updated: 2019/11/07 17:33:31 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;
	int				diff;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	diff = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			diff = str1[i] - str2[i];
			return (diff);
		}
		i++;
	}
	return (diff);
}
