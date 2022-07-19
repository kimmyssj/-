#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*tracker;

	if (lst == 0)
		return (0);
	if (lst->next == 0)
		return (lst);
	tracker = lst->next;
	while (tracker != 0)
	{
		if (tracker->next == 0)
			return (tracker);
		else
			tracker = tracker->next;
	}
	return (0);
}
