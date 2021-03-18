#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	int				tmp;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	tmp = nbr % 10 + '0';
	ft_putchar_fd(tmp, fd);
}
