/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:32:32 by jchene            #+#    #+#             */
/*   Updated: 2019/11/14 15:28:48 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*str;
	unsigned int		lens1;
	unsigned int		lens2;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1))
		return ((char *)s2);
	else if (!(s2))
		return ((char *)s1);
	lens1 = (int)ft_strlen(s1);
	lens2 = (int)ft_strlen(s2);
	if (!(str = (char *)ft_calloc((lens1 + lens2 + 1), sizeof(char))))
		return (NULL);
	ft_strlcpy(str, s1, lens1 + 1);
	ft_strlcpy(&str[lens1], s2, lens2 + 1);
	return (str);
}
