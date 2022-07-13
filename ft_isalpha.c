int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d, %d, %d", ft_isalpha('s'), ft_isalpha('S'), ft_isalpha('1'));
}
*/
