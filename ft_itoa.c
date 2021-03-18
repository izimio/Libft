#include "libft.h"

static int	count(int nb)
{
	long	nbr;
	int		i;

	i = 0;
	nbr = nb;
	if (nbr <= 0)
	{
		i++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char		*ft_itoa(int nb)
{
	long	nbr;
	int		i;
	char	*toa;

	i = count(nb);
	nbr = nb;
	toa = ft_calloc(i + 1, 1);
	if (!toa)
		return (NULL);
	toa[0] = '0';
	if (nb == 0)
		return (toa);
	if (nbr < 0)
	{
		toa[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		toa[--i] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (toa);
}
