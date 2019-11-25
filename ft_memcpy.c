/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:23:02 by jchene            #+#    #+#             */
/*   Updated: 2019/11/25 17:02:26 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned int	i;
	char			*dest;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	source = (unsigned char *)src;
	dest = dst;
	i = 0;
	while (i < n)
	{
		dest[i] = (unsigned char)source[i];
		i++;
	}
	return (dst);
}
