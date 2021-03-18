#include "libft.h"

void *ft_calloc(size_t elementcount, size_t elementsize)
{
    void *mem;

    mem = malloc(elementcount * elementsize);
    if(!mem)
        return(NULL);
    ft_bzero(mem,elementcount);
    return(mem);
}