#include <stdio.h>

void    ft_putstr_non_printable(char *str);

int	main(void)
{
	char *str;

	str = "I am\nZidane";

	ft_putstr_non_printable(str);
	return (0);
}
