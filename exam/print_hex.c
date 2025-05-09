#include <unistd.h>

int	ft_atoi(char *s)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (s[i])
	{
		n = n * 10 + (s[i] - 48);
		i++;
	}
	return (n);
}

void	ft_ph(int n)
{
//	int	i;

//	i = 0;
//	if (n == 0)
//		write(1, "0", 1);
	if (n > 16)
		ft_ph(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_ph(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
