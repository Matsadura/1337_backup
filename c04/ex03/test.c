#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char  *ft_isspace(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ')
		i++;
	return (&str[i]);
}

int	ft_sign(char *str)
{
	int	sign;
	int index;

	sign = 0;
	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '-')
			sign++;
		index++;
	}
	if (sign % 2 == 1)
		return (1);
	return (0);
}

char *ft_skip_signs(char *str)
{
	int index;

	index = 0;
	while (str[index] == '-' || str[index] == '+')
	{
			index++;
	}
	return (&str[index]);
}

int ft_atoi(char *str)
{
	char *clean_string;
	int sign;
	int	index;
	int result;

	clean_string = ft_isspace(str);
	sign = ft_sign(clean_string);
	clean_string = ft_skip_signs(clean_string);
	result = 0;
	index = 0;
	while(clean_string[index] >= '0' && clean_string[index] <= '9')
	{
		result = result * 10;
		result += clean_string[index] - '0';
		index++;
	}

	if (sign == 1)
		return (result *= -1);
	return (result);
}

int	main(void)
{
	// printf("%s\n",ft_skip_signs(ft_isspace("   ---+--+1234ab567")));
	printf("%d\n",ft_atoi("   ----+--+1234ab567"));
	printf("%d\n",ft_atoi("---fd123"));
	printf("%d\n",ft_atoi("+++4d1"));
	printf("%d\n",ft_atoi("4"));
	return (0);
}
