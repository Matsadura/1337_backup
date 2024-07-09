#include <stdio.h>

int	*ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int i;
	int *arr;

	i = 0;
	ft_ultimate_range(&arr, 0, 25);
	while(i < 25)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
