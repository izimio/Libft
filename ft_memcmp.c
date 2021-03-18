# include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned const char *trues1;
    unsigned const char *trues2;
    if(!n)
        return(0);

    trues1 = (unsigned const char *)s1;
    trues2 = (unsigned const char *)s2;
    i = 0;
    while ((i < n - 1) && trues1[i] == trues2[i])
        i++;
    return(trues1[i] - trues2[i]);
}