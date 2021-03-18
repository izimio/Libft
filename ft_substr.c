#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len)
{
    char *newstr;

    if (!str[0])
        return (NULL);
    if (start >= ft_strlen((char *)str))
    {
        newstr = malloc(sizeof(char));
        if (!newstr)
            return (NULL);
        newstr[0] = '0';
        return(newstr);
    }
    newstr = malloc(sizeof(char) * len + 1);
    if(!newstr)
        return(NULL);
    ft_memcpy(newstr,str + start,len);
    return(newstr);
}