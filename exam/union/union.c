#include <stdio.h>

int	in_buff(char c, char *buff)
{
	int	i;

	i = 0;
	while (buff[i])
	{
		if (c == buff[i])
			return (-1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	char buff[1024];
	int	i;
	int	j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		buff[0] = '\0';
		while (av[1][i])
		{
			if (in_buff(av[1][i], buff) == 0)
			{
				buff[j] = av[1][i];
				j++;
			}
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (in_buff(av[2][i], buff) == 0)
			{
				buff[j] = av[2][i];
				j++;
			}
			i++;
		}
		buff[i] = '\0';
		printf("%s", buff);
	}
	putchar('\n');
}
