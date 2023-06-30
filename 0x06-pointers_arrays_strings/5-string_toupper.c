#include <stdio.h>
#include <ctype.h>

char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
str[i] = toupper(str[i]);
i++;
}
return (str);
}
int main()
{
char str[] = "Hello, World!";
printf("%s\n", string_toupper(str));
return (0);
}

