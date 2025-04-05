#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**arr;
	int	i;
	int	j;
	int	k;

	arr = malloc(1000);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] > 32)
		{
			k = 0;
			arr[j] = malloc(1000);
			while (str[i] > 32)
				arr[j][k++] = str[i++];
			arr[j][k] = 0;
			j++;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}
