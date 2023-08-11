#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes to concatenate from s2.
 *
 * Return: pointer to the concatenated string or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len = 0, s2_len = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;

	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	concat_str = malloc(sizeof(char) * (s1_len + n + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];

	for (i = 0; i < n; i++)
		concat_str[s1_len + i] = s2[i];

	concat_str[s1_len + n] = '\0';

	return (concat_str);
}

