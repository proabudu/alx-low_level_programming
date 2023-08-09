#include "main.h"
#include <stdlib.h>

/* This function splits a string into words */
/* It takes one parameter: str (the string to split) */
/* It returns a pointer to an array of strings (words) */
/* Each element of the array contains a single word, null-terminated */
/* The last element of the array is NULL */
/* Words are separated by spaces */
/* It returns NULL if str is NULL or empty */
/* It handles memory allocation and deallocation */
/* This function counts the number of words in a string */
int count_words(char *str)
{
int count; /* word count */
int i; /* loop variable */
/* check if str is NULL or empty */
if (str == NULL || str[0] == '\0')
return (0);
/* initialize count to 0 */
count = 0;
/* loop through the string */
for (i = 0; str[i] != '\0'; i++)
{
/* if the current character is not a space and the next character is either a space or the end of the string, increment count */
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}
/* return the word count */
return (count);
}
/* This function allocates memory for a word and copies it from the string */
char *copy_word(char *str, int start, int end)
{
char *word; /* pointer to the word */
int i, j; /* loop variables */
/* allocate memory for the word plus the null character */
word = malloc(sizeof(char) * (end - start + 2));
if (word == NULL)
return (NULL);
/* copy the word from the string */
j = 0;
for (i = start; i <= end; i++)
{
word[j] = str[i];
j++;
}
word[j] = '\0';
/* return the pointer to the word */
return (word);
}
/* This function splits a string into words and returns an array of strings */
char **strtow(char *str)
{
char **words; /* pointer to the array of words */
int wc; /* word count */
int i, j, k; /* loop variables */
int start, end; /* indices of the start and end of a word */
/* check if str is NULL or empty */
if (str == NULL || str[0] == '\0')
return (NULL);
/* get the word count from the string */
wc = count_words(str);
/* allocate memory for the array of words plus the NULL element */
words = malloc(sizeof(char *) * (wc + 1));
if (words == NULL)
return (NULL);
/* loop through the string and copy each word to the array */
k = 0;
for (i = 0; str[i] != '\0'; i++)
{
/* if the current character is not a space, find the start and end of the word */
if (str[i] != ' ')
{
start = i;
while (str[i] != ' ' && str[i] != '\0')
i++;
end = i - 1;
/* copy the word to the array and check for allocation failure */
words[k] = copy_word(str, start, end);
if (words[k] == NULL)
{
/* free the allocated memory if allocation fails */
while (k--)
free(words[k]);
free(words);
return (NULL);
}
k++;
}
}
/* add the NULL element to the array */
words[k] = NULL;
/* return the pointer to the array of words */
return (words);
}

