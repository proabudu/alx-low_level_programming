#include "main.h"
#include <stdlib.h>

/* This function concatenates all the arguments of the program */
/* It takes two parameters: ac (argument count) and av (argument vector) */
/* It returns a pointer to a new string, or NULL if it fails */
/* Each argument is followed by a \n in the new string */

char *argstostr(int ac, char **av)
{
char *str; /* pointer to the new string */
int i, j, k; /* loop variables */
int len; /* length of the new string */
/* check if ac or av is invalid */
if (ac == 0 || av == NULL)
return (NULL);
/* calculate the length of the new string */
len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++; /* for the \n character */
}
len++; /* for the \0 character */
/* allocate memory for the new string */
str = malloc(sizeof(char) * len);
if (str == NULL)
return (NULL);
/* copy each argument to the new string */
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
/* return the pointer to the new string */
return (str);
}

