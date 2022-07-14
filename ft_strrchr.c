char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		idx;

	idx = 0;
	s1 = 0;
	if (c == 0)
	{
		while (s[idx])
			idx ++;
		return ((char *)s + idx);
	}
	while (s[idx])
	{
		if (s[idx] == c)
			s1 = (char *)s + idx;
		idx ++;
	}
	return (s1);
}
