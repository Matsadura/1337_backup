#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char *arr = "I am Zidane";
	char *str;

	str = malloc(strlen(arr) + 1);
	strcpy(str, arr);
	str = ft_strupcase(str);

	puts(arr);
	printf("%lu\n", strlen(arr));
	puts(str);
	printf("%lu\n", strlen(str));
	return (0);
}
