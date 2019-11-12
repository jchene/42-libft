/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:47:15 by jchene            #+#    #+#             */
/*   Updated: 2019/11/12 17:41:55 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

char	*ft_strdup(const char *s1)
{
	int	i;
	int	len;
	char	*str;
	
	i = 0;
	len = ft_strlen((char *)s1);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!(str))
		return (NULL);
	while (i < len)
	{
		str[i] = (char)s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
