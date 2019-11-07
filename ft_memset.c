/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:50:33 by jchene            #+#    #+#             */
/*   Updated: 2019/11/07 18:08:19 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	chr;
	size_t			i;
	char			*str;

	str = s;
	i = 0;
	chr = (unsigned char)c;
	while (i < n)
	{
		str[i] = chr;
		i++;
	}
	return (s);
}
