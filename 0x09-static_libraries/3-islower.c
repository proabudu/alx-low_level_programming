#include <stdio.h>
/**
* 3-islower.c - A function that checks for lowercase character
* @c: The character to check
*
* Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
/* Check if c is in the range of lowercase letters */
if (c >= 'a' && c <= 'z')
{
/* Return 1 */
return (1);
}
/* Otherwise, c is not lowercase */
else
{
/* Return 0 */
return (0);
}
}
