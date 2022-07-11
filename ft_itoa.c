#include <stdlib.h>

void	itoa_maker(long long n, int deci_numb, char *itoa_str)
{
	int			flag;
	long long	ten_mul;

	ten_mul = 1;
	flag = 0;
	while (flag < deci_numb)
	{
		ten_mul = ten_mul * 10;
		flag ++;
	}
	ten_mul = ten_mul / 10;
	flag = 0;
	if (n < 0)
	{
		n = -1 * n;
		flag = 1;
	}
	while (n > 0)
	{
		deci_numb = n / ten_mul;
		n = n % ten_mul;
		ten_mul = ten_mul / 10;
		itoa_str[flag] = deci_numb + 48;
		flag ++;
	}
}

char	*itoa_str_maker(long long n, int deci_numb)
{
	char	*itoa_str;

	if (n < 0)
	{
		itoa_str = (char *)malloc(sizeof(char) * deci_numb + 2);
		itoa_str[0] = '-';
		itoa_str[deci_numb + 1] = '\0';
	}
	else if (n > 0)
	{
		itoa_str = (char *)malloc(sizeof(char) * deci_numb + 1);
		itoa_str[deci_numb] = '\0';
	}
	else
	{
		itoa_str = (char *)malloc(sizeof(char) * 2);
		itoa_str[0] = '0';
		itoa_str[1] = '\0';
	}
	return (itoa_str);
}

char	*ft_itoa(int n)
{
	long long	container;
	int			deci_numb;
	char		*itoa_str;

	container = n;
	deci_numb = 0;
	while (container != 0)
	{
		container = container / 10;
		deci_numb ++;
	}
	itoa_str = itoa_str_maker(n, deci_numb);
	if (n == 0)
		return (itoa_str);
	itoa_maker(n, deci_numb, itoa_str);
	return (itoa_str);
}

/*
#include <stdio.h>

int main(void)
{
	int a = 2147483647;
	int b = -2147483648;
	int c = 0;
	int aa = 124124;
	int ab = -124124;
	int ac = 200000000;
	char *d = ft_itoa(a);
	char *e = ft_itoa(b);
	char *f = ft_itoa(c);
	char *g = ft_itoa(aa);
	char *h = ft_itoa(ab);
	char *i = ft_itoa(ac);
	printf("%s  %s   %s\n %s  %s  %s\n", d, e, f, g, h, i); 
}
*/
