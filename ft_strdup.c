#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		idx;
	char	*result;

	idx = 0;
	while (s1[idx])
		idx ++;
	result = (char *)malloc(sizeof(char) * idx + 1);
	if (result == 0)
		return (0);
	while (idx != -1)
	{
		result[idx] = s1[idx];
		idx --;
	}
	return (result);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	printf("normal %s\n", strdup("niakqllw"));
	printf("mine %s\n", ft_strdup("niakqllw"));
}
*/