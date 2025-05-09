#include <unistd.h>

void	ft(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >=65 && s[i] <= 90)
			s[i] += 32;
		else if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft(argv[1]);
	write(1, "\n", 1);
	return (0);
}
