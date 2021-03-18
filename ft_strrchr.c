# include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int i;

    i = ft_strlen((char *)str);
    if(str[i] == c)
        return ((char *)&str[i]);
    while (str[--i] && i > 0)
        if(str[i] == c)
            return((char *)&str[i]);
    if(str[i] == c)
        return ((char *)&str[i]);
    return(NULL);
}