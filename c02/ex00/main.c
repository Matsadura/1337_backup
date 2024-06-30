#include <stdlib.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*str;

	str = malloc(5);
	str = ft_strcpy(str, "Hello");
	printf("%s\n", str);
	return 0;
}
