#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char base[] = "0123456789ABCDEF";
	// printf("%s\n",ft_skip_signs(ft_isspace("   ---+--+1234ab567")));
	printf("%d\n",ft_atoi_base("   ---+--+1234ab567", base));
	printf("%d\n",ft_atoi_base("---2471D2", base));
	printf("%d\n",ft_atoi_base("+++4d1", base));
	printf("%d\n",ft_atoi_base("4", base));
	return (0);
}
