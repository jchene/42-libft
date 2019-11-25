/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:25:46 by jchene            #+#    #+#             */
/*   Updated: 2019/11/07 18:15:53 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	chr;
	size_t			i;

	source = (unsigned char *)src;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (source[i] == chr)
			return (&source[i]);
		i++;
	}
	return (NULL);
}
