/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:02:26 by jchene            #+#    #+#             */
/*   Updated: 2019/11/07 10:02:28 by jchene           ###   ########.fr       */
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

char    *ft_strrchr(const char *s, int c)
{
    char    *str;
    int     i;
    int     len;

    str = (char *)s;
    len = ft_strlen(str);
    i = len - 1;
    if (str == NULL)
        return (NULL);
    while (i >= 0)
    {
        if (str[i] == c)
            return (&str[i]);
        i--;
    }
    return (NULL);
}
