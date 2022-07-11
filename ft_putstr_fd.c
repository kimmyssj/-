#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
	int idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		write(fd, s + idx, 1);
		idx ++;
	}
}

/*
int	main(void)
{
	ft_putstr_fd("asadskqw wqk kqk ekq kefi @#!@#*!$*@$* JWi wdiojq ij$*@! Uㄴㄴ\n", 2);
	ft_putstr_fd("!@#(!@(#(DFSJAJIA iasjasidj  ASIDJQW (@! ( QWJDJIASJ I\n", 1);
	ft_putstr_fd("!@E129eq9ewdiiasidaiDI@!EIID asdI ID I]\n", 0);
}
*/
