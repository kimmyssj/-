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
	while (str[idx] == ' ' || (str[idx] >= 9 && str[idx] <= 13))
		idx ++;
	result = result_maker(str, idx);
	return (result);
}
