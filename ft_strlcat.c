#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;

	d = 0;
	i = 0;
	while (dest[d] && d < size)
		d++;
	while (src[i] && i + d + 1 < size)
	{
		dest[d + i] = src[i];
		i++;
	}
	if (d != size)
		dest[d + i] = '\0';
	return (d + ft_strlen(src));
}
