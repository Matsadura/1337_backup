#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *str;

	str = malloc(strlen("Zidane ZAOUI"));
	str = ft_strncpy(str, "Zidane ZAOUI", 6);
	printf("%s\n", str);
	return 0;
}
