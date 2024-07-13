#include <stdio.h>

int	*ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int i;
	int *arr;

	i = 0;
	ft_ultimate_range(&arr, -25, -20);
	while(*arr)
	{
		printf("%d\n", *arr);
		arr++;
	}
	return (0);
}
