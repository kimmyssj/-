#include	<stdlib.h>

int	fffft_strlen(char const *s)
{
	int	idx;

	idx = 0;
	while (s[idx])
		idx++;
	return (idx);
}

char	*write_in_new_str(char const *s1, char const *s2, char *answer)
{
	int	idx0;
	int	idx1;

	idx0 = 0;
	idx1 = 0;
	while (idx0 < fffft_strlen(s1))
	{
		answer[idx0] = s1[idx0];
		idx0 ++;
	}
	while (idx1 < fffft_strlen(s2))
	{
		answer[idx0 + idx1] = s2[idx1];
		idx1 ++;
	}
	answer[idx0 + idx1] = '\0';
	return (answer);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		idx;
	char	*answer;

	idx = 0;
	answer = (char *)malloc(sizeof(char) * (fffft_strlen(s1) + fffft_strlen(s2) + 1));
	if (answer == NULL)
		return (NULL);
	return (write_in_new_str(s1, s2, answer));
}

/*
#include <stdio.h>
int main(void)
{
	char s1[] = "abcdef  ";
	char s2[] = "!!!ghijkl";

	printf("%s\n", ft_strjoin(s1, s2));
}
*/
