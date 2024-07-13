#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int i, max, min;
	int *arr;

	i = 0;
	max = 5;
	min = 1;
	arr = ft_range(min, max);
	while(i < max - min)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
