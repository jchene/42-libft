/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 15:29:02 by jchene            #+#    #+#             */
/*   Updated: 2019/11/15 15:05:12 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isinset(int c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	int				i;
	unsigned int	start;

	if (!(s1) || !(*s1) || !(set))
		return ((char *)s1);
	i = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	if (s1[i])
		start = i;
	else if (i == (int)ft_strlen(s1))
		return (ft_strdup(""));
	else
		return (0);
	i = (int)ft_strlen(s1) - 1;
	while (i > 0 && ft_isinset(s1[i], set))
		i--;
	if (!(str = (char *)ft_calloc((i - start + 2), sizeof(char))))
		return (NULL);
	ft_strlcpy(str, &s1[start], i - start + 2);
	return (str);
}
