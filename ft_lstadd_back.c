#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!new || !alst)
		return ;
	else if ((*alst) == NULL)
		(*alst) = new;
	else
		ft_lstadd_back(&(*alst)->next, new);
}
