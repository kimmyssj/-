void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	idx;

	idx = 0;
	while (s[idx])
	{
		f(idx, s + idx);
		idx++;
	}
}
