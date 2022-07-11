#include	<stdlib.h>

int	ffft_strlen(char const *s)
{
	int	idx;

	idx = 0;
	while (s[idx])
		idx++;
	return (idx);
}

int	s1_without_set(char const *s1, char const *set)
{
	int	idx0;
	int	idx1;
	int	answer;

	idx0 = 0;
	answer = 0;
	while (s1[idx0])
	{
		idx1 = 0;
		answer ++;
		while (set[idx1])
		{
			if (s1[idx0] == set[idx1])
				answer --;
			idx1 ++;
		}
		idx0 ++;
	}
	return (answer);
}

void	inquisitor(char const *s1, char const *set, int *set_th)
{
	int	idx0;
	int	idx1;
	int	idx2;

	idx0 = 0;
	idx2 = 0;
	while (s1[idx0])
	{
		idx1 = 0;
		while (set[idx1])
		{
			if (s1[idx0] == set[idx1])
			{
				set_th[idx2] = idx0;
				idx2 ++;
			}
			idx1 ++;
		}
		idx0 ++;
	}
}

void	putt_char_in(char const *s1, char *answer, int *set_th)
{
	int	idx0;
	int	idx1;
	int	idx2;

	idx0 = 0;
	idx1 = 0;
	idx2 = 0;
	while (s1[idx0])
	{
		if (idx0 != set_th[idx1])
		{
			answer[idx2] = s1[idx0];
			idx2 ++;
		}
		else
			idx1++;
		idx0 ++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_wo_set;
	int		*set_th;
	char	*answer;

	s1_wo_set = s1_without_set(s1, set);
	set_th = (int *)malloc(sizeof(int) * (ffft_strlen(s1) - s1_wo_set + 1));
	answer = (char *)malloc(sizeof(char) * (s1_wo_set) + 1);
	if (set_th == NULL || answer == NULL)
		return (NULL);
	inquisitor(s1, set, set_th);
	putt_char_in(s1, answer, set_th);
	return (answer);
}

/*
#include <stdio.h>
int main(void)
{
	char a[] = "abcdeababcdeqwerqwerxqqqyzzzzzzzzzzsd";
	char b[] = "aqz";
	char *c;
	c = ft_strtrim(a, b);
	printf("%s", c);
	free(c);
}
*/
