#include "libft.h"

t_list		*ft_lstlast(t_list *lst)
{
	if (!lst || !lst->next)
		return (lst);
	return (ft_lstlast(lst->next));
}
