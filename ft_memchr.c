#include <stdlib.h>

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

/*
#include<string.h>
#include<stdio.h>
int	main(void)
{
	char str[] = "aaaabbbbccccdddd";

	printf("%s", (char *)ft_memchr(str, 'b', 5));
	printf("%s", (char *)ft_memchr(str, 'b', 3));
	printf("%s", (char *)memchr(str, 'b', 5));
	printf("%s", (char *)memchr(str, 'b', 3));
}
*/
