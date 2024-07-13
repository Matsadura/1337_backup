#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *str;

	str = ft_strjoin(4, (char *[]){"Hello", "World", "Test", "Function"}, "-+*");
	puts(str);
	return (0);
}
