/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:50:33 by jchene            #+#    #+#             */
/*   Updated: 2019/11/06 16:37:49 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	chr;
	size_t			i;
	char			*str;

	str = s;
	i = 0;
	chr = (unsigned char)c;
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = chr;
		i++;
	}
	return (s);
}
