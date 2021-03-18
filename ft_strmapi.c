#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    unsigned int i;
    unsigned int len;

    len = ft_strlen((char *)s);
    i = -1;
    res = ft_calloc(len + 1,1);
    if(!res)
        return(NULL);
    while (++i < len)
        res[i] = f(i,s[i]);
    return(res);
}