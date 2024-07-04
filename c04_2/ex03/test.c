#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int	ft_atoi(char *str);

int	main(void)
{
	// printf("%s\n",ft_skip_signs(ft_isspace("   ---+--+1234ab567")));
	printf("%d\n",ft_atoi("   ---+--+1234ab567"));
	printf("%d\n",ft_atoi("---fd123"));
	printf("%d\n",ft_atoi("+++4d1"));
	printf("%d\n",ft_atoi("4"));
	return (0);
}
