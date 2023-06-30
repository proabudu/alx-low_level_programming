#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
{
return (0);
}
i++;
}
return (s1[i] - s2[i]);
}
int main()
{
char str1[100] = "Hello";
char str2[100] = "World";
int result = _strcmp(str1, str2);
if (result < 0)
{
printf("str1 is less than str2\n");
}
else if (result > 0)
{
printf("str2 is less than str1\n");
}
else
{
printf("str1 is equal to str2\n");
}
return (0);
}

