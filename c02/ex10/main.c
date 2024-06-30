/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzaoui <zzaoui@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:02:55 by zzaoui            #+#    #+#             */
/*   Updated: 2024/06/29 20:58:43 by zzaoui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main() {
    char dest[20];
    size_t result;

    // Test Case 1: Normal Case
    result = strlcpy(dest, "Hello", sizeof(dest));
    printf("Test Case 1: dest = '%s', length = %zu\n", dest, result);
    result = ft_strlcpy(dest, "Hello", sizeof(dest));
    printf("Test Case 1: dest = '%s', length = %zu\n", dest, result);


    result = ft_strlcpy(dest, "Hello", sizeof(dest));
    printf("Test Case 1: dest = '%s', length = %zu\n", dest, result);


    // Test Case 2: Destination Size Exactly Equal to Source String Length
    result = strlcpy(dest, "Hello", 6);
    printf("Test Case 2: dest = '%s', length = %zu\n", dest, result);
    result = ft_strlcpy(dest, "Hello", 6);
    printf("Test Case 2: dest = '%s', length = %zu\n", dest, result);


    // Test Case 3: Destination Size Smaller Than Source String Length
    result = strlcpy(dest, "Hello", 4);
    printf("Test Case 3: dest = '%s', length = %zu\n", dest, result);
    result = ft_strlcpy(dest, "Hello", 4);
    printf("Test Case 3: dest = '%s', length = %zu\n", dest, result);


    // Test Case 4: Empty Source String
    result = strlcpy(dest, "", sizeof(dest));
    printf("Test Case 4: dest = '%s', length = %zu\n", dest, result);
    result = ft_strlcpy(dest, "", sizeof(dest));
    printf("Test Case 4: dest = '%s', length = %zu\n", dest, result);


    // Test Case 5: Empty Destination String (Ensure Null Termination)
    result = strlcpy(dest, "Hello", 1);
    printf("Test Case 5: dest = '%s', length = %zu\n", dest, result);
    result = ft_strlcpy(dest, "Hello", 1);
    printf("Test Case 5: dest = '%s', length = %zu\n", dest, result);


    // Test Case 6: Null Pointer Check
    result = strlcpy(NULL, "Hello", 5);
    printf("Test Case 6: length = %zu\n", result);
    result = ft_strlcpy(NULL, "Hello", 5);
    printf("Test Case 6: length = %zu\n", result);


    // Test Case 7: Large Source String (Verify Truncation)
    result = strlcpy(dest, "This is a very long string", 10);
    printf("Test Case 7: dest = '%s', length = %zu\n", dest, result);
    result = ft_strlcpy(dest, "This is a very long string", 10);
    printf("Test Case 7: dest = '%s', length = %zu\n", dest, result);


    // Test Case 8: Exactly Maximum Destination Size
    result = strlcpy(dest, "Hello", 6);
    printf("Test Case 8: dest = '%s', length = %zu\n", dest, result);
    result = ft_strlcpy(dest, "Hello", 6);
    printf("Test Case 8: dest = '%s', length = %zu\n", dest, result);


    // Test Case 9: Destination Size Just One Less Than Source String Length
    result = strlcpy(dest, "Hello", 5);
    printf("Test Case 9: dest = '%s', length = %zu\n", dest, result);
    result = ft_strlcpy(dest, "Hello", 5);
    printf("Test Case 9: dest = '%s', length = %zu\n", dest, result);


    // Test Case 10: Destination Size Zero
    result = strlcpy(dest, "Hello", 0);
    printf("Test Case 10: dest = '%s', length = %zu\n", dest, result);
    result = ft_strlcpy(dest, "Hello", 0);
    printf("Test Case 10: dest = '%s', length = %zu\n", dest, result);


    return 0;
}
