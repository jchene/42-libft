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