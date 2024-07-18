#include <stdio.h>

void ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	int	i;
	int len;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		ft_swap(&str[i], &str[len - i - 1]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char arr[] = "Hello World";

	printf("%s\n", arr);
	printf("%s\n", ft_strrev(arr));
	return (0);
}
