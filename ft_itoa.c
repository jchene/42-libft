/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:07:22 by jchene            #+#    #+#             */
/*   Updated: 2019/11/15 17:31:43 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(long nb)
{
	long	i;

	i = 1;
	while (nb > 9)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	char	*str;
	long	nb;

	nb = n;
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		nb *= -1;
	}
	i = (neg ? ft_nbrlen(nb) : ft_nbrlen(nb) - 1);
	if (!(str = (char *)ft_calloc(sizeof(char), ft_nbrlen(nb) + neg + 1)))
		return (NULL);
	while (nb > 9)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	str[i] = (nb % 10) + '0';
	if (neg)
		str[0] = '-';
	return (str);
}
