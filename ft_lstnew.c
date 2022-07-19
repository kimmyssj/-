#include	"libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*answer;

	answer = 0;
	if (!(answer = (void *)malloc(sizeof(void *) * 2)))
		return (0);
	answer->content = content;
	answer->next = NULL;
	return (answer);
}
