#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	idx;

	idx = 0;
	while (s[idx])
	{
		write(fd, s + idx, 1);
		idx ++;
	}
	write(1, "\n", 1);
}

/*
int main(void)
{
	ft_putendl_fd("dakqlc oo ao9219 9!(@#(@!#(", 2);
	ft_putendl_fd("QWEIQWE !@(#(!( (! @$(W (AS ", 1);
	ft_putendl_fd("             asdiIQWI    ", 0);
}
*/
