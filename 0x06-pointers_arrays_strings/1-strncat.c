#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
int main()
{
char str1[100] = "Hello";
char str2[100] = "World";
_strncat(str1, str2, 3);
printf("%s\n", str1);
return (0);
}

