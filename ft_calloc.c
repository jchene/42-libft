/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:36:42 by jchene            #+#    #+#             */
/*   Updated: 2019/11/20 21:26:13 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!count || !size)
	{
		size = 1;
		count = 1;
	}
	if (!(ptr = malloc(size * count)))
		return (NULL);
	return (ft_memset(ptr, 0, count * size));
}
