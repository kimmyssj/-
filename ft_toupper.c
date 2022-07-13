int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('c'));
	printf("%c\n", ft_toupper('z'));
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('-'));
	printf("%c\n", ft_toupper('3'));
	printf("%c\n", ft_toupper('\n'));
}
*/
