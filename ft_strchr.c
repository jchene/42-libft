/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:02:09 by jchene            #+#    #+#             */
/*   Updated: 2019/11/07 10:02:18 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_strlen(char  *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char  *ft_strchr(const char *s, int c)
{
    char    *str;
    int     i;
    int     len;

    str = (char *)s;
    len = ft_strlen(str);
    i = 0;
    if (str == NULL)
        return (NULL);
    while (i < len)
    {
        if (str[i] == c)
            return (&str[i]);
        i++;
    }
    return (NULL);
}
