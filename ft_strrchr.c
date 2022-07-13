char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		idx;

	idx = 0;
	s1 = 0;
	while (s[idx])
	{
		if (s[idx] == c)
			s1 = (char *)s + idx;
		idx ++;
	}
	return (s1);
}

/*
#include<stdio.h>
#include<string.h>
int main(void)
{
	printf("%s\n", ft_strrchr("aaaabbbcccdddeeefff", 'd'));
	printf("%s\n", strrchr("aaaabbbcccdddeeefff", 'd'));
	printf("%s\n", ft_strrchr("aaaabbbcccdddeeefff", 'g'));
	printf("%s\n", strrchr("aaaabbbcccdddeeefff", 'g'));
}
*/
