#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b) {
  /* This function allocates memory using malloc and checks if the allocation was successful.
   * If the allocation fails, the function exits with a status value of 98.
   *
   * Parameters:
   *   b - The number of bytes to allocate.
   *
   * Returns:
   *   A pointer to the allocated memory, or NULL if the allocation failed.
   */

  void *ptr = malloc(b);
  if (ptr == NULL) {
    _putchar('\n');
    exit(98);
  }

  return ptr;
}

