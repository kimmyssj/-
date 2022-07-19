#include	"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*answer;

	answer = 0;
	answer = (void *)malloc(sizeof(void *) * 2);
	if (!answer)
		return (0);
	answer->content = content;
	answer->next = NULL;
	return (answer);
}
