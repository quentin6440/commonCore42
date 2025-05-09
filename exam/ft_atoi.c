int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	long	n;

	i= 0;
	s = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (n * s);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("12") * 2);
	return (0);
}*/
