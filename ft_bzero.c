#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			idx0;
	unsigned char	*s1;

	idx0 = 0;
	s1 = (unsigned char *)s;
	if (n == 0)
		return ;
	while (idx0 < n)
	{
		s1[idx0] = 0;
		idx0 ++;
	}
}
