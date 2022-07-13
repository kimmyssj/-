#include<stdlib.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s11;
	char	*s22;
	size_t	idx;

	s11 = (char *)s1;
	s22 = (char *)s2;
	idx = 0;
	while ((s11[idx] && s22[idx]) && s11[idx] == s22[idx] && idx < n)
		idx ++;
	return ((unsigned char)s11[idx] - (unsigned char)s22[idx]);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "123456789";
	
	printf("%d\n", ft_memcmp(s1, "123456789", 9));
	printf("%d\n", ft_memcmp(s1, "12345", 9));
	printf("%d\n", ft_memcmp(s1, "123456", 9));
	printf("%d\n", ft_memcmp(s1, "123456889", 9));
	printf("%d\n", ft_memcmp(s1, "123456689", 9));
	printf("%d\n", ft_memcmp(s1, "1234566", 9));
	printf("\n");
	printf("%d\n", memcmp(s1, "123456789", 9));
	printf("%d\n", memcmp(s1, "12345", 9));
	printf("%d\n", memcmp(s1, "123456", 9));
	printf("%d\n", memcmp(s1, "123456889", 9));
	printf("%d\n", memcmp(s1, "123456689", 9));
	printf("%d\n", memcmp(s1, "1234566", 9));
	printf("\n");
	printf("%d",ft_memcmp("t\200", "t\0", 2));
}
*/
