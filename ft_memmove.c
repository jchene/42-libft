/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:25:29 by jchene            #+#    #+#             */
/*   Updated: 2019/11/07 18:55:27 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	tmp[n];
	size_t			i;
	char			*dest;
	
	source = (unsigned char *)src;
	dest = dst;
	i = 0;
	if (dest == NULL && source == NULL)
		return (NULL);
	while (i < n)
	{
		tmp[i] = source[i];
		i++;
	}
	i = 0;	
	while (i < n)
	{
		dest[i] = tmp[i];
		i++;
	}
	return (dst);
}
