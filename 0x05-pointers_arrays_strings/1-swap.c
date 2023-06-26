/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Description: This function takes two pointers to integers as parameters
 * and swaps the values of the integers they point to.
 */
void swap_int(int *a, int *b)
{
int temp = *a;  // Store the value pointed by 'a' in a temporary variable
*a = *b;        // Assign the value pointed by 'b' to the variable pointed by 'a'
*b = temp;      // Assign the temporary variable to the variable pointed by 'b'
}

