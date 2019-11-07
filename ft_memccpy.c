/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:25:15 by jchene            #+#    #+#             */
/*   Updated: 2019/11/06 17:31:51 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	chr;
	size_t			i;
	char			*dest;

	source = (unsigned char *)src;
	chr = (unsigned char)c;
	dest = dst;
	i = 0;
	if (src == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = (unsigned char)source[i];
		if (source[i] == chr)
			return (&dst[i]);
		i++;
	}
	return (NULL);
}
