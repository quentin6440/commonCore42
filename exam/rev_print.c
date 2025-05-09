#include <unistd.h>

void	ft_rv(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	while (i--)
	{
		write(1, &str[i], 1);
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_rv(argv[1]);
	write(1, "\n", 1);
	return (0);
}
