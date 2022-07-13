char	*ft_strchr(const char *s, int c)
{
	int	idx;

	idx = 0;
	while (s[idx])
	{
		if (s[idx] == c)
			return ((char *)s + idx);
		idx++;
	}
	return (0);
}

/*
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char	abc[] = "abcdefghijklmnopqrstuvwxyz";
	
	printf("%s\n", ft_strchr(abc, 'A'));
	printf("%s\n", strchr(abc, 'A'));
}
*/
