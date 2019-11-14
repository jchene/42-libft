/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:47:40 by jchene            #+#    #+#             */
/*   Updated: 2019/11/14 17:57:10 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!(str = (char *)ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	ft_strlcpy(str, &s[start], len + 1);
	return (str);
}
