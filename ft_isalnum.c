int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
#include<stdio.h>
int	main(void)
{
	printf("%d, %d, %d, %d, %d", ft_isalnum('5'), ft_isalnum('f'), ft_isalnum('S'), ft_isalnum('\n'), ft_isalnum(123));
}
*/
