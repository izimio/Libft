#include "libft.h"

void	*ft_memset(void *start, int value, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = -1;
	str = (unsigned char *)start;
	while (++i < n)
		str[i] = (unsigned char)value;
	return (start);
}
