#include <stdlib.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while ((s1[idx] && s2[idx]) && s1[idx] == s2[idx] && idx < n)
		idx ++;
	if (s1[idx] == '\0' || s2[idx] == '\0')
		return (0);
	return (s1[idx] - s2[idx]);
}

/*
#include<string.h>
#include<stdio.h>
int	main(void)
{
	printf("%d\n",strncmp("abcde", "abcde", 5));
	printf("%d\n",strncmp("abcdg", "abcda", 5));
	printf("%d\n",strncmp("abcde", "abcde", 3));
	printf("%d\n",strncmp("abcde", "abcde", 7));
	printf("%d\n",strncmp("abcae", "abcde", 4));
	printf("%d\n",strncmp("abcde", "abcde", 0));
	printf("\n");
	printf("%d\n",ft_strncmp("abcde", "abcde", 5));
	printf("%d\n",ft_strncmp("abcdg", "abcda", 5));
	printf("%d\n",ft_strncmp("abcde", "abcde", 3));
	printf("%d\n",ft_strncmp("abcde", "abcde", 7));
	printf("%d\n",ft_strncmp("abcae", "abcde", 4));
	printf("%d\n",ft_strncmp("abcde", "abcde", 0));
	printf("0, 1, 1, 0, -1, 0");
}
*/
