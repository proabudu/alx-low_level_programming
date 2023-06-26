/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: pointer to the buffer where the string is to be copied.
 * @src: pointer to the string to be copied.
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

