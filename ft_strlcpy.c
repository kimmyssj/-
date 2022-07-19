#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	idx;
	size_t	src_len;

	src_len = 0;
	idx = 0;
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	while (idx < dstsize - 1 && idx < src_len)
	{
		dst[idx] = src[idx];
		idx ++;
	}
	dst[idx] = '\0';
	return (src_len);
}
