/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:06:06 by jchene            #+#    #+#             */
/*   Updated: 2019/11/12 19:15:05 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nblen(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

int	ft_longcmp(const char *s1, const int minus)
{
	int		i;
	char	*longstr;

	i = 0;
	longstr = "9223372036854775807";
	if (ft_nblen((char *)s1) < 19)
		return (1);
	if (ft_nblen((char *)s1) > 19)
	{
		if (minus)
			return (0);
		return (-1);
	}
	while (s1[i] && (s1[i] == longstr[i]))
		i++;
	if (s1[i] >= '0' && s1[i] <= '9')
	{
		if (s1[i] > longstr[i])
		{
			if (minus)
				return (0);
			return (-1);
		}
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	ret;
	int	minus;

	i = 0;
	ret = 0;
	minus = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
		str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[++i - 1] == '-')
			minus++;
	if (ft_longcmp(&str[i], minus) != 1)
		return (ft_longcmp(&str[i], minus));
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	if (minus)
		ret = ret * -1;
	return (ret);
}
