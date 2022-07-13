#include<stdlib.h>
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	idx;
	size_t	stlen;

	stlen = 0;
	idx = 0;
	while (src[stlen])
		stlen ++;
	if (dstsize == 0)
	{
		*dst = '\0';
		return (stlen);
	}
	while (idx < dstsize - 1)
	{
		dst[idx] = src[idx];
		idx ++;
	}
	dst[idx] = '\0';
	return (stlen);
}

/*
#include<string.h>
#include<stdio.h>
int main(void)
{
	char str1[] = "123456";
	char str2[4];
	char str3[] = "123456";
	char str4[4];
	size_t s = 1;

	strlcpy(str2, str1, s);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%lu\n", strlcpy(str2, str1, s));
	ft_strlcpy(str4, str3, s);
	printf("%s\n", str3);
	printf("%s\n", str4);
	printf("%lu\n", ft_strlcpy(str4, str3, s));
}
*/
