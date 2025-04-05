#include <unistd.h>

void	print_hex(int n)
{
	if (n > 16)
		print_hex(n / 16);
	write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int argc, char **argv)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			n = n * 10 + (argv[1][i] - 48);
			i++;
		}
		print_hex(n);
	}
	write(1, "\n", 1);
	return (0);
}
