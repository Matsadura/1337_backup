#include <string.h>
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
	int	i;

	i = 0;
	while(s[i] == accept[i] && s[i] && accept[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%lu\n", strspn("Hello", "Hello"));
	printf("%lu\n", ft_strspn("Hello", "Hello"));
	return (0);
}
