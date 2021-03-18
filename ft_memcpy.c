#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *truedest;
    unsigned const char *truesrc;

    if (!dest && !src && n)
        return (NULL);
    truedest = (unsigned char *)dest;
    truesrc = (unsigned const char *)src;
    i = -1;
    while (++i < n)
    {
        truedest[i] = truesrc[i];
    }
    return (truedest);
}