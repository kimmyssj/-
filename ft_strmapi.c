#include	<stdlib.h>
#include	"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*answer;
	unsigned int	str_len;
	unsigned int	idx;

	str_len = ft_strlen(s);
	answer = (char *)malloc(sizeof(char) * (str_len + 1));
	idx = 0;
	while (idx < str_len)
	{
		answer[idx] = f(idx, s[idx]);
		idx ++;
	}
	answer[idx] = '\0';
	return (answer);
}
