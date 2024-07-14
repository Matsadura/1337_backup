#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void test_convert_base(char *number, char *from_base, char *to_base, char *expected) {
   char *result = ft_convert_base(number, from_base, to_base);
   if (result == NULL) {
   if (expected == NULL) {
   printf(" ✔ Test passed: %s from base '%s' to base '%s' => NULL (expected: NULL)\n", number, from_base, to_base);
   } else {
   printf(" ✘ Test failed: %s from base '%s' to base '%s' => NULL (expected: %s)\n", number, from_base, to_base, expected);
   }
   } else if (strcmp(result, expected) == 0) {
   printf(" ✔ Test passed: %s from base '%s' to base '%s' => %s\n", number, from_base, to_base, result);
   } else {
   printf(" ✘ Test failed: %s from base '%s' to base '%s' => %s (expected: %s)\n", number, from_base, to_base, result, expected);
   }
   free(result); // assuming ft_convert_base allocates memory that needs to be freed
   }

int main ()
   {
   test_convert_base("0", "0123456789", "abcdef", "a");
   test_convert_base("123456", "0123456789", "0123456789abcdef", "1e240");

// Additional test cases
test_convert_base("0", "0123456789", "0123456789abcdef", "0"); // Edge case: smallest number
test_convert_base("1", "0123456789", "0123456789abcdef", "1"); // Edge case: smallest non-zero number
test_convert_base("a", "0123456789abcdef", "0123456789", "10"); // Single digit conversion in hex to decimal
test_convert_base("f", "0123456789abcdef", "0123456789", "15"); // Highest single digit in hex
test_convert_base("10", "0123456789", "0123456789abcdef", "a"); // Base 10 to base 16
test_convert_base("255", "0123456789", "0123456789abcdef", "ff"); // Decimal 255 to hex
test_convert_base("100", "0123456789", "0123456789abcdef", "64"); // Base 10 to base 16
test_convert_base("7fffffff", "0123456789abcdef", "0123456789", "2147483647"); // Large number conversion (max 32-bit signed int)
test_convert_base("1010", "01", "0123456789", "10"); // Binary to decimal
test_convert_base("1101", "01", "0123456789", "13"); // Binary to decimal

// More conversions between different bases
test_convert_base("1234", "0123456789", "01234567", "2322"); // Decimal to octal
test_convert_base("1234", "0123456789", "01", "10011010010"); // Decimal to binary
test_convert_base("1111", "0123456789abcdef", "0123456789", "4369"); // Hex to decimal
test_convert_base("1234", "0123456789", "0123456789abcdef", "4d2"); // Decimal to hex
test_convert_base("abcd", "0123456789abcdef", "0123456789", "43981"); // Hex to decimal
test_convert_base("zz", "abcdefghijklmnopqrstuvwxyz", "0123456789", "675"); // Base 36 to decimal


// Negative number tests
test_convert_base("-123456", "0123456789", "0123456789abcdef", "-1e240");
test_convert_base("-255", "0123456789", "0123456789abcdef", "-ff");
test_convert_base("-100", "0123456789", "0123456789abcdef", "-64");
test_convert_base("-7fffffff", "0123456789abcdef", "0123456789", "-2147483647");
test_convert_base("-1010", "01", "0123456789", "-10");
test_convert_base("-1101", "01", "0123456789", "-13");

test_convert_base("-1101", "01", "0", NULL);
test_convert_base("-1101", "01", "", NULL);

test_convert_base("-1101", "++01", "   0i123456", NULL);

}
