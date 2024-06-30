#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("QWERA"));
	printf("%d\n", ft_str_is_uppercase("fdsaf"));
	printf("%d\n", ft_str_is_uppercase("QWeFDAS"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}
