char *_strcpy(char *dest, char *src)
/* The `_strcpy()` function returns a pointer to the copied string (dest).*/
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

