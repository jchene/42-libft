/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 15:13:56 by jchene            #+#    #+#             */
/*   Updated: 2019/11/25 19:39:18 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	int				ncnt;
	int				nlen;

	i = 0;
	ncnt = 0;
	nlen = (int)ft_strlen((char *)needle);
	if (!(needle[i]))
		return ((char *)haystack);
	if (!(haystack[i]))
		return (NULL);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[ncnt])
			ncnt++;
		else
			ncnt = 0;
		if (ncnt == nlen)
			return ((char *)&haystack[i - nlen + 1]);
		i++;
	}
	return (NULL);
}
