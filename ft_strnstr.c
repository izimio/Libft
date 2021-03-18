#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t b;

	b = 0;
	i = -1;
	if (!s2[0])
		return ((char *)s1);
	while ((++i < len) && s1[i])
	{
		if (s1[i] == s2[b])
		{
			b++;
			if (s2[b] == '\0')
				return ((char *)&s1[i - (b - 1)]);
		}
		else
			b = 0;
	}
	return (NULL);
}
