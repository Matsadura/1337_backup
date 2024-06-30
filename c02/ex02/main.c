#include <stdio.h>

int ft_str_is_alpha(char    *str);

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("WEFDSAE"));
	printf("%d\n", ft_str_is_alpha("WEFEeEE"));
	printf("%d\n", ft_str_is_alpha("WEFee6EE"));
	printf("%d\n", ft_str_is_alpha("fdasfdsa"));
	printf("%d\n", ft_str_is_alpha(""));
	return 0;
}
