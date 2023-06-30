#include <stdio.h>

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
int main()
{
char str1[100] = "Hello";
char str2[100] = "World";
_strncpy(str1, str2, 3);
printf("%s\n", str1);
return (0);
}

