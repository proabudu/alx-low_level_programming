#include "main.h"
#include <stdlib.h>
/*
* strtow - Splits a string into words.
*
* Description:
*   Splits a string into an array of words. Each element of the array
*   is null-terminated. The last element of the array is NULL.
*
* @str: The string to split.
*
* Returns: A pointer to the array of words, or NULL on failure.
*/
char **strtow(char *str) {
/* Check if str is NULL or empty. */
if (str == NULL || str[0] == '\0') {
return NULL;
}
/* Initialize the variables. */
char **words = NULL;
int i = 0, j = 0;
/* Iterate over the string. */
while (str[i] != '\0') {
/* Skip spaces. */
while (str[i] == ' ') {
i++;
}
/* If we are not at the end of the string, add the word to the array. */
if (str[i] != '\0') {
/* Allocate memory for the word. */
words = realloc(words, (j + 1) * sizeof(char *));
if (words == NULL) {
free(words);
return NULL;
}
/* Set the word pointer. */
words[j] = &str[i];
/* Find the end of the word. */
while (str[i] != ' ' && str[i] != '\0') {
i++;
}
/* Terminate the word. */
str[i] = '\0';
/* Increment the word count. */
j++;
}
}
/* Add a NULL terminator to the end of the array. */
words = realloc(words, (j + 1) * sizeof(char *));
if (words == NULL) {
free(words);
return NULL;
}
words[j] = NULL;
/* Return the array of words. */
return words;
}

