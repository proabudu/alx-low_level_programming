#include <stdio.h>

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
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
strcat(str1, str2);
printf("%s\n", str1);
return (0);
}

