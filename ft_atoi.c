/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:06:06 by jchene            #+#    #+#             */
/*   Updated: 2019/11/11 20:01:03 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int c);

int	ft_iswhitespace(int c)
{
	if (c == '\t' || c == '\n' || c == '\r' || c == '\v' || c == '\f' || c  == ' ')
		return (1);
	return (0);
}

int	ft_issymbol(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long	ret;
	int	i;
	int	minus;

	i = 0;
	ret = 0;
	minus = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	if (ft_issymbol(str[i]) && ft_isdigit(str[i + 1]))
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	if (ft_isdigit(str[i]))
	{
		while (ft_isdigit(str[i]))
		{
			printf("ret: %ld\n", ret);
			ret = ret * 10 + (str[i] - '0');
			i++;
		}
		if (minus)
			ret = ret * -1;
	}
	return (ret);
}

int	main()
{
	char *str = "9223372036854775807";
	printf("atoi:    %d\n\n", atoi(str));
	printf("ft_atoi: %d\n", ft_atoi(str));
	return (0);
}
