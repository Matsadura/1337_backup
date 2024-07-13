#include <stdio.h>
char **ft_split(char *str, char *charset);
int main(void)
{
	char **buff = ft_split("Hello -   - World- I am Zidane---", " +-");
	//printf("count words : %d\n", _count_words("Hello+word-I-am/Zidane", "+-/"));
	int i = 0;
	while(buff[i])
	{
		printf("%s\n", buff[i]);
		i++;
	}
	return (0);
}
