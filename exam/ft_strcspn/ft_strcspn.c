#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%ld", strcspn("", "zl"));
	putchar('\n');
	printf("%ld", ft_strcspn("", "zl"));
	putchar('\n');
	return (0);
}
