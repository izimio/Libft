#include "libft.h"
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int num;
	int res;

	i = 0;
	num = 1;
	res = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			num = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res += str[i] - '0';
		res *= 10;
		i++;
	}
	return ((res / 10) * num);
}
