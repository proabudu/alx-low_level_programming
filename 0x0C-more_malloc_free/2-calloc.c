#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements in the array.
 * @size: size of each element in bytes.
 *
 * Return: pointer to the allocated memory or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_ptr;
	unsigned int i;
	char *mem_set;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_ptr = malloc(nmemb * size);

	if (mem_ptr == NULL)
		return (NULL);

	mem_set = mem_ptr;

	for (i = 0; i < nmemb * size; i++)
		mem_set[i] = 0;

	return (mem_ptr);
}

