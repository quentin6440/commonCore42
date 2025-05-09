#include <stdio.h>
#include <stdlib.h>

void	ft_fp(int n)
{
	unsigned int	prime;

	if (n == 1)
	{
		printf("%i", n);
		return ;
	}
	prime = 2;
	while (n > 1)
	{
		if (n % prime == 0)
		{
			printf("%i", prime);
			n /= prime;
			if (n > 1)
				printf("*");
			prime--;
		}
		prime++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_fp(atoi(argv[1]));
	printf("\n");
	return (0);
}
