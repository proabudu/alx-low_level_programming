#include "main.h"
#include "holberton.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
    return (check_prime(n, 2));
}

/**
 * check_prime - helper function to check for prime
 * @n: the number to check
 * @i: the divisor to test
 * Return: 1 if prime, 0 otherwise
 */

int check_prime(int n, int i)
{
    if (n <= 1) /* base case: not prime */
        return (0);
    if (n % i == 0 && i < n) /* divisible by a smaller number */
        return (0);
    if (i == n) /* reached the end of recursion */
        return (1);
    return (check_prime(n, i + 1)); /* recursive call */
}

