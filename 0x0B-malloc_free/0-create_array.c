#include "main.h"
#include <stdlib.h>

/*
* create_array  - used to create array of char
* size : array size
*return : the array completed
*/

char *create_array(unsigned int size, char c) /* Creates an array of chars for the code. */
{
char *array;
unsigned int i;
if (size == 0)
return (NULL);
array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}

