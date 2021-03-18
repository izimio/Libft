#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	src = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (src[i] == (unsigned char)c)
			return (&src[i]);
	return (NULL);
}
