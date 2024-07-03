#include <stdio.h>
#include <limits.h>

void ft_putnbr(int nb);

int main()
{
	ft_putnbr(INT_MIN);
	putchar('\n');
	ft_putnbr(INT_MAX);
	putchar('\n');
	ft_putnbr(123);
	putchar('\n');
	ft_putnbr(1);
	putchar('\n');
	ft_putnbr(-123);
	putchar('\n');
	ft_putnbr(-1);
	putchar('\n');
	ft_putnbr(0);
	putchar('\n');
	return (0);
}
