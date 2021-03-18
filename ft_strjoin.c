#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    int lens1;
    int lens2;

    if (!s1 || !s2)
        return (NULL);
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);

    res = malloc(sizeof(char) * (lens1 + lens2 + 1));
    if (!res)
        return (NULL);
    ft_memcpy(res, s1, lens1);
    ft_memcpy(res + lens1, s2, lens2);
    res[lens1 + lens2] = 0;
    return (res);
}