#include <stdio.h>
#include <stdlib.h>

// Function prototypes
char *cap_string(char *);
char *leet(char *);

int main() {
    // Test the cap_string function
    char input1[] = "hello world, how are you?";
    char *result1 = cap_string(input1);
    printf("Capitalized: %s\n", result1);
    free(result1);  // Remember to free the dynamically allocated memory

    // Test the leet function
    char input2[] = "Hello, World!";
    char *result2 = leet(input2);
    printf("Leet version: %s\n", result2);
    free(result2);  // Remember to free the dynamically allocated memory

    return 0;
}

