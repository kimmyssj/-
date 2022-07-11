#include <unistd.h>

void	nbr_maker(long long n, int deci_numb, char *nbr_str)
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
		nbr_str[flag] = deci_numb + 48;
		flag ++;
	}
}

void	putnbr_str_maker(long long n, int deci_numb, char *nbr_str)
{
	if (n < 0)
	{
		nbr_str[0] = '-';
		nbr_str[deci_numb + 1] = '\0';
	}
	else if (n > 0)
		nbr_str[deci_numb] = '\0';
	else
	{
		nbr_str[0] = '0';
		nbr_str[1] = '\0';
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long long	container;
	int			deci_numb;
	char		nbr_str[12];

	container = n;
	deci_numb = 0;
	while (container != 0)
	{
		container = container / 10;
		deci_numb ++;
	}
	putnbr_str_maker(n, deci_numb, nbr_str);
	if (n == 0)
		write(fd, "0", 1);
	nbr_maker(n, deci_numb, nbr_str);
	if (n < 0)
		deci_numb ++;
	write(fd, nbr_str, deci_numb);
}

/*
int main(void)
{
	ft_putnbr_fd(-2147483648, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 0);
	write(1, "\n", 1);
	ft_putnbr_fd(1234, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(-1234, 1);
}
*/
