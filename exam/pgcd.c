#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_pgcd(int a, int b)
{
	if (a && b)
	{
		while (a != b)
		{
			if (a > b)
				a = a - b;
			else 
				b = b - a;
		}
		return (a);
	}
//	return (1);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%i", ft_pgcd(a, b));
	}
	printf("\n");
	return (0);
}
