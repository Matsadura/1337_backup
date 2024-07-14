#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	t_stock_str *result;
	int i;

	result = ft_strs_to_tab(ac, av);
	i = 0;
	while (i < ac)
	{
		printf("size: %d | str: %s | copy: %s\n", result[i].size, result[i].str, result[i].copy);
		i++;
	}
	return (0);
}
