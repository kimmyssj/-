#include "libft.h"

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
		answer[idx] = s[start + idx];
		idx ++;
	}
	answer[idx] = '\0';
	return (answer);
}
