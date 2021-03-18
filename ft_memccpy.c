#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*truedest;
	unsigned char			*truesrc;

	if (!dest && !src && !c && !n)
		return (NULL);
	truedest = (unsigned char *)dest;
	truesrc = (unsigned char *)src;
	i = 0;
	while (i < n && truesrc[i] != (unsigned char)c)
	{
		truedest[i] = truesrc[i];
		i++;
	}
	if (i == n)
		return (NULL);
	truedest[i] = truesrc[i];
	i++;
	return (&truedest[i]);
}
