#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;
	size_t	idx;

	idx = 0;
	result = (char *)malloc(size * count);
	if (result == 0)
		return (0);
	while (idx < size * count)
	{
		result[idx] = '\0';
		idx ++;
	}
	return (result);
}
