#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	idx;

	idx = 0;
	while (s[idx])
		idx ++;
	return (idx);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char c[] = "12345";
	printf("%zu, %zu\n", strlen(c), ft_strlen(c));
}
*/
