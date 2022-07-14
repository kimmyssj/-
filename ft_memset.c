#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			idx;
	unsigned char	*b1;

	b1 = (unsigned char *)b;
	idx = 0;
	while (idx < len)
	{
		*(b1 + idx) = (unsigned char)c;
		idx ++;
	}
	return (b1);
}
