#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t b;

	i = 0;
	if (!s2[0])
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		b = 0;
		while (s1[i + b] && s2[b] && i + b < len &&
		s1[i + b] == s2[b])
			b++;
		if (!s2[b])
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
