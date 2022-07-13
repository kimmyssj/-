#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		idx;
	char		*str;
	const char	*str1;

	str = (char *)dst;
	str1 = (const char *)src;
	idx = 0;
	while (idx < n)
	{
		str[idx] = str1[idx];
		idx ++;
	}
	return (dst);
}

/*
#include<string.h>
#include<stdio.h>

int	main(void)
{
	int	src[] = {1,2,3};
	int	dest[3];
	int	dest1[3];

	memcpy(dest, src, sizeof(int) * 3);

	for (int i = 0; i < 3; ++i)
	{
		printf("%d ", src[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; ++i)
	{
		printf("%d ", dest[i]);
	}
	printf("\n");
	ft_memcpy(dest1, src, sizeof(int) * 3);

	for (int i = 0; i < 3; ++i)
	{
		printf("%d ", src[i]);
	}
	printf("\n");

	for (int i = 0; i < 3; ++i)
	{
		printf("%d ", dest1[i]);
	}
}
*/
