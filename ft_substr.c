#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *newstr;

    if (!s[0])
        return (NULL);
    if (start >= ft_strlen((char *)s))
        return((char *)ft_calloc(1,'\0'));
    newstr = malloc(sizeof(char) * len + 1);
    if(!newstr)
        return(NULL);
    ft_memcpy(newstr,s + start,len);
    newstr[len] = '\0';
    return(newstr);
}