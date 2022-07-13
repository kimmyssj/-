int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include<stdio.h>
int main(void)
{
	printf("%d, %d, %d", ft_isdigit('0'), ft_isdigit('5'), ft_isdigit('c'));
}
*/
