#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes it with a
* specific char
* @size: size of array
* @c: char to initialize array with
*
* Return: pointer to the array, or NULL if size = 0 or if it fails
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
/* check if size is 0 */
if (size == 0)
return (NULL);
/* allocate memory for array */
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
/* initialize array with char c */
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}

