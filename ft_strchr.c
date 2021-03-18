#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
	}
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}
