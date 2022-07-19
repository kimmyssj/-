#include "libft.h"

void	*memmoving(char *dstcop, char *srccop, size_t len)
{
	size_t	idx;

	idx = 0;
	if (dstcop < srccop)
	{
		while (idx < len)
		{
			dstcop[idx] = srccop[idx];
			idx ++;
		}
	}
	else
	{
		while (idx < len)
		{
			dstcop[len - idx - 1] = srccop[len - idx - 1];
			idx ++;
		}
	}
	return ((void *)dstcop);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srccop;
	char	*dstcop;

	dstcop = (char *)dst;
	srccop = (char *)src;
	return (memmoving(dstcop, srccop, len));
}
