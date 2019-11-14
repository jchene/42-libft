/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:03:47 by jchene            #+#    #+#             */
/*   Updated: 2019/11/14 12:58:20 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		len;

	str = (char *)s;
	len = (int)ft_strlen(str);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < len + 1)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
