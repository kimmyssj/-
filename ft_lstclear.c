#include "libft.h"

void ft_recursive_clear(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	if (lst->next != NULL)
		ft_recursive_clear(lst->next, del);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	ft_recursive_clear(*lst, del);
	*lst = NULL;
}
