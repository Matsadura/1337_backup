#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int i;
	int *arr;

	i = 0;
	arr = ft_range(0, 25);
	while(i < 25)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}
