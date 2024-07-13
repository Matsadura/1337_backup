#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int main(void)
{
	printf("%s\n", strdup("Hello STRDUP"));
	printf("%s\n", ft_strdup("Hello ft_DUP"));
	return (0);
}
