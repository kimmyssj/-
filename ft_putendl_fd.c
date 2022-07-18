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
	write(fd, "\n", 1);
}
