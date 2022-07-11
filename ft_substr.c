#include	<stdlib.h>

int	fft_strlen(char *s)
{
	int	idx;

	idx = 0;
	while (s[idx])
		idx ++;
	return (idx);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*answer;
	size_t	idx;

	idx = 0;
	answer = (char *)malloc(len * sizeof(char) + 1);
	if (answer == NULL)
		return (NULL);
	while (idx < len)
	{
		answer[idx] = s[start + idx - 1];
		idx ++;
	}
	answer[idx] = '\0';
	return (answer);
}

#include <stdio.h>
int	main(void)
{
	printf("%s", ft_substr("abcdefghijklmnop", 15, 8));
}
