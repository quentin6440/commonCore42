unsigned int	hcf(unsigned int a, unsigned int b)
{
	unsigned int t;

	t = 0;
	if (a == b)
		return (a);
	if (a < b)
	{
		t = a;
		a  = b;
		b = t;
	}
	while (b)
	{
		t = b;
		b = a % b;	
		a = t;
	}
	return (t);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if ((int)a <= 0 || (int)b <= 0)
		return (0);
	unsigned int res;
	res = (a * b) / hcf(a, b);

	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int a, b;

	a = 3;
	b = 8;
	printf("%d", lcm(a, b));

	return (0);
}*/
