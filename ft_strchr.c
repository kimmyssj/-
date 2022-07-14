char	*ft_strchr(const char *s, int c)
{
	int	idx;

	idx = 0;
	if (c == 0)
	{
		while (s[idx])
			idx++;
		return ((char *)s + idx);
	}
	while (s[idx])
	{
		if (s[idx] == c)
			return ((char *)s + idx);
		idx++;
	}
	return (0);
}
