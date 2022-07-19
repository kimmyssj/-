#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		idx;
	const char	*str;

	idx = 0;
	str = (char *)s;
	while (idx < n)
	{
		if (str[idx] == c)
			return ((void *)str + idx);
		idx ++;
	}
	return (0);
}
