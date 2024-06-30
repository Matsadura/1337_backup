#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("qewrdaf"));
	printf("%d\n", ft_str_is_lowercase("qewRdaf"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
