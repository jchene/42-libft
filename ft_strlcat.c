/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:59:36 by jchene            #+#    #+#             */
/*   Updated: 2019/11/26 20:49:32 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	len;
	size_t			i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen((char *)src));
	if (dst == NULL)
		return (0);
	len = ft_strlen((char *)dst);
	if (dstsize < len)
		return (dstsize + ft_strlen((char *)src));
	while (len + i < dstsize - 1 && src[i])
	{
		dst[i + len] = src[i];
		i++;
	}
	if (dstsize != 0 && src[0])
		dst[i + len] = '\0';
	return (ft_strlen((char *)src) + len);
}
