#include <stdio.h>
#include <stdlib.h>
// A function that returns the length of a string
int _strlen_recursion(char *s)
{
// If the string is empty, return 0
if (s[0] == '\0')
{
return (0);
}
// Otherwise, return 1 plus the length of the rest of the string
return (1 + _strlen_recursion(s + 1));
}
// A helper function that checks if a string is a palindrome
int _is_palindrome(char *s, int start, int end)
{
// If the start and end indices cross, the string is a palindrome
if (start >= end)
{
return (1);
}
// If the characters at the start and end do not match, the string is not a palindrome
if (s[start] != s[end])
{
return (0);
}
// Otherwise, check the rest of the string
return (_is_palindrome(s, start + 1, end - 1));
}
// A function that returns 1 if a string is a palindrome and 0 if not
int is_palindrome(char *s)
{
int len = _strlen_recursion(s); // The length of the string
return (_is_palindrome(s, 0, len - 1)); // Call the helper function
}
// A main function to test the is_palindrome function
int main(void)
{
char *s = "racecar";
int result;
result = is_palindrome(s);
printf("%d\n", result);
return (0);
}
