#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if ((unsigned char *)dest < (unsigned const char *)src)
		return (ft_memcpy(dest, src, n));
	else
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned const char *)src)[n];
	return (dest);
}
