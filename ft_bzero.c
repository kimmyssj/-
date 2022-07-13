#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			idx0;
	unsigned char	*s1;

	idx0 = 0;
	s1 = (unsigned char *)s;
	if (n == 0)
		return ;
	while (idx0 < n)
	{
		s1[idx0] = 0;
		idx0 ++;
	}
}

/*
#include <strings.h>
#include <stdio.h>
int	main(void)
{
	char str[] = "12345";
	char str1[] = "12345";
	bzero(str, 6);
	ft_bzero(str1,6 );
	printf("%s 1  %s  1", str, str1);
}
*/
