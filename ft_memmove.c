/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:25:29 by jchene            #+#    #+#             */
/*   Updated: 2019/11/06 18:36:04 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*source;
	size_t			i;
	char			*dest;

	source = (unsigned char *)src;
	dest = dst;
	i = 0;
	if (src == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = (unsigned char)source[i];
		i++;
	}
	return (dst);
}
