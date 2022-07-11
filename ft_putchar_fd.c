#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main(void)
{
	ft_putchar_fd('q', 2);
	ft_putchar_fd('2', 1);
	ft_putchar_fd('@', 0);
}
*/
