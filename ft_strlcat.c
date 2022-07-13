#include <stdlib.h>

size_t	ftt_strlen(char * restrict s)
{
	size_t	idx;

	idx = 0;
	while (s[idx])
		idx++;
	return (idx);
}

size_t	fttt_strlen(const char * restrict s)
{
	size_t	idx;

	idx = 0;
	while (s[idx])
		idx++;
	return (idx);
}

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	idx;
	size_t	len;
	size_t	srclen;

	idx = 0;
	len = ftt_strlen(dst);
	srclen = fttt_strlen(src);
	while ((idx <= dstsize - len - 1) && (len < dstsize))
	{
		dst[len + idx] = src[idx];
		idx++;
	}
	if (idx < dstsize - len - 1)
		return (dstsize + srclen);
	else
		dst[len + idx - 1] = '\0';
	return (dstsize + srclen - 1);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char		dst[30] = "i am lazy lady,";
	const char	src[] = " people call me katie";
	char		dst1[30] = "i am lazy lady,";
	const char	src1[] = " people call me katie";

	strlcat(dst, src, 30);
	ft_strlcat(dst1, src1, 30);
	printf("%s, %zu\n", dst, strlcat(dst, src, 30));
	printf("%s, %zu\n", dst1, ft_strlcat(dst1, src, 30));
}
*/
