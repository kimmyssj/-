int	result_maker(const char *str, int idx)
{
	long long	result;
	long long	flag;

	result = 0;
	flag = 0;
	if (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			flag = 1;
		idx ++;
	}
	while (str[idx] && str[idx] >= '0' && str[idx] <= '9')
	{
		result = result * 10;
		result = result + str[idx] - '0';
		idx++;
	}
	if (flag == 1)
		result = result * -1;
	return ((int)result);
}

int	ft_atoi(const char *str)
{
	int	idx;
	int	result;

	idx = 0;
	if (!((str[0] >= '0' && str[0] <= '9') || str[0] == '-'
		|| str[0] == '+' || str[0] == ' '))
		return (0);
	while (str[idx] == ' ')
		idx ++;
	result = result_maker(str, idx);
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("%d\n", atoi("0"));
	printf("%d\n", atoi("1"));
	printf("%d\n", atoi("-1"));
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", atoi("-2147483648"));
	printf("%d\n", atoi("+2147483647"));
	printf("%d\n", atoi("        1"));
	printf("%d\n", atoi("  -1a1"));
	printf("%d\n", atoi(" 1"));
	printf("%d\n", atoi(" -1"));
	printf("%d\n", atoi("a1"));
	printf("%d\n", atoi("a-1"));
	printf("%d\n", atoi("+-1"));
	printf("%d\n", atoi("--1"));
	printf("%d\n", atoi("2147483648"));
	printf("\n");
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
	printf("%d\n", ft_atoi("+2147483647"));
	printf("%d\n", ft_atoi("        1"));
	printf("%d\n", ft_atoi("  -1a1"));
	printf("%d\n", ft_atoi(" 1"));
	printf("%d\n", ft_atoi(" -1"));
	printf("%d\n", ft_atoi("a1"));
	printf("%d\n", ft_atoi("a-1"));
	printf("%d\n", ft_atoi("+-1"));
	printf("%d\n", ft_atoi("--1"));
	printf("%d\n", ft_atoi("2147483648"));
}
*/
