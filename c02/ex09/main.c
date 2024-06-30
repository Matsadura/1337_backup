#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *ft_strcapitalize(char *str);

int main() {
    char test1[] = "hello world";
    char test2[] = "hello-world+Test";
    char test3[] = "Hello World";
    char test4[] = "HELLO-WORLD";
    char test5[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("Original string 1: %s\n", test1);
    printf("Capitalized string 1: %s\n", ft_strcapitalize(test1));

    printf("Original string 2: %s\n", test2);
    printf("Capitalized string 2: %s\n", ft_strcapitalize(test2));

    printf("Original string 3: %s\n", test3);
    printf("Capitalized string 3: %s\n", ft_strcapitalize(test3));

    printf("Original string 4: %s\n", test4);
    printf("Capitalized string 4: %s\n", ft_strcapitalize(test4));

    printf("Original string 5: %s\n", test5);
    printf("Capitalized string 5: %s\n", ft_strcapitalize(test5));
    return 0;
}

