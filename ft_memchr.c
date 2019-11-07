/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:25:46 by jchene            #+#    #+#             */
/*   Updated: 2019/11/06 18:53:08 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*source;
	unsigned char	chr;
	size_t			i;

	source = (unsigned char *)src;
	chr = (unsigned char)c;
	i = 0;
	if (src == NULL)
		return (NULL);
	while (i < n)
	{
		if (source[i] == chr)
			return (&source[i]);
		i++;
	}
	return (NULL);
}
