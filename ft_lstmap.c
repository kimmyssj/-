#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*answer;
	void	*asd;

	asd = NULL;
	answer = NULL;
	del(asd);
	while (lst->next != NULL)
	{
		ft_lstadd_back(&answer, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	ft_lstadd_back(&answer, ft_lstnew(f(lst->content)));
	return (answer);
}
