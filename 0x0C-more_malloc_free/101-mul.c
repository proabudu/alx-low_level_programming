#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @str: string to get the length of.
 *
 * Return: length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _isdigit - checks if a character is a digit.
 * @c: character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _puts - prints a string to stdout.
 * @str: string to print.
 */
void _puts(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * mul - multiplies two positive numbers.
 * @num1: first number to multiply.
 * @num2: second number to multiply.
 *
 * Return: pointer to the result or NULL on failure.
 */
char *mul(char *num1, char *num2)
{
	char *result;
	unsigned int len1, len2, i, j, k, carry = 0;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';

	result[i] = '\0';

	for (i = len1 - 1; i < len1; i--)
	{
		if (!_isdigit(num1[i]))
			return (NULL);

		carry = 0;

		for (j = len2 - 1, k = i + j + 1; j < len2; j--, k--)
		{
			if (!_isdigit(num2[j]))
				return (NULL);

			carry += (num1[i] - '0') * (num2[j] - '0') + result[k] - '0';
			result[k] = carry % 10 + '0';
			carry /= 10;
		}

		result[k] += carry;
	}

	while (*result == '0' && *(result + 1) != '\0')
		result++;

	return (result);
}

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed to the program.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}

	if (*argv[1] == '\0' || *argv[2] == '\0')
	{
		_puts("Error\n");
		exit(98);
	}

	result = mul(argv[1], argv[2]);

	if (result == NULL)
	{
		_puts("Error\n");
		exit(98);
	}

	if (*result == '\0')
		result--;

	while (*result != '\0')
	{
		_putchar(*result);
		result++;
	}

	_putchar('\n');

	free(result);

	return (0);
}

