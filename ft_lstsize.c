#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		idx;
	t_list	*container;

	if (lst == 0)
		return (0);
	container = lst;
	idx = 1;
	while (container->next)
	{
		idx ++;
		container = container->next;
	}
	return (idx);
}
