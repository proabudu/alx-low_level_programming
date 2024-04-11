#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: The index of the first occurrence of value, or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i; // Use a more descriptive variable name

    if (array == NULL) {
        return -1; // Indicate error condition
    }

    for (i = 0; i < size; i++) {
        // No need for printing inside the search function (unless for debugging)
        if (array[i] == value) {
            return i; // Return index if found
        }
    }

    return -1; // Not found
}
