#include <stdlib.h>

/*
 * strtow - Splits a string into words.
 *
 * Description:
 *   Splits a string into words, and returns an array of pointers to the words.
 *   Each element of the array should contain a single word, null-terminated.
 *   The last element of the returned array should be NULL.
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

  /* Iterate over the string, one character at a time. */
  while (str[i] != '\0') {
    /* If the current character is a space, add the current word to the array. */
    if (str[i] == ' ') {
      words[j] = &str[i - 1];
      j++;
    }

    /* Increment the index. */
    i++;
  }

  /* Add the last word to the array. */
  words[j] = &str[i - 1];

  /* Return the array of words. */
  return words;
}

