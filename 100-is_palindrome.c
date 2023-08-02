#include "main.h"
#include "holberton.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
    int len = _strlen_recursion(s); /* get the length of the string */
    return (check_palindrome(s, 0, len - 1)); /* call the helper function */
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
    if (*s == '\0') /* base case: end of string */
        return (0);
    return (1 + _strlen_recursion(s + 1)); /* recursive call */
}

/**
 * check_palindrome - helper function to check for palindrome
 * @s: the string to check
 * @i: the index from the left
 * @j: the index from the right
 * Return: 1 if palindrome, 0 otherwise
 */

int check_palindrome(char *s, int i, int j)
{
    if (i >= j) /* base case: middle or end of string */
        return (1);
    if (s[i] != s[j]) /* not matching characters */
        return (0);
    return (check_palindrome(s, i + 1, j - 1)); /* recursive call */
}

