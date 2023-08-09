#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of the specified size and fills it with the
* specified value.
*
* @param size The size of the array to create.
* @param value The value to fill the array with.
*
* @return A pointer to the created array, or NULL on failure.
*/

char *create_array(unsigned int size, char c)
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

