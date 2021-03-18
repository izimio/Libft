#include "libft.h"

static int	ft_isinset(char const *set, char c)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	i = 0;
	len = ft_strlen(s1) - 1;
	while (s1[i] && ft_isinset(set, s1[i]) == 1)
		i++;
	while (s1[len] && ft_isinset(set, s1[len]) == 1 && len > i)
		len--;
	res = malloc(sizeof(char) * (len - i + 2));
	if (!res)
		return (NULL);
	while (i <= len)
		res[j++] = s1[i++];
	res[j] = 0;
	return (res);
}
