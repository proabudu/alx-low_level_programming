#include <stdio.h>
#include <stdlib.h>
// A function that locates a substring in a string
char *_strstr(char *haystack, char *needle)
{
int i = 0; // The index of the haystack
int j = 0; // The index of the needle
char *p = NULL; // The pointer to the first occurrence of the needle
// If the needle is empty, return the haystack
if (needle[0] == '\0')
{
return (haystack);
}
// Loop through the haystack
while (haystack[i] != '\0')
{
// If the current character matches the first character of the needle
if (haystack[i] == needle[0])
{
// Save the pointer to the current position
p = &haystack[i];
// Loop through the needle
while (needle[j] != '\0')
{
// If the characters do not match, break the loop
if (haystack[i + j] != needle[j])
{
break;
}
j++;
}
// If the end of the needle is reached, return the pointer
if (needle[j] == '\0')
{
return (p);
}
// Reset the index of the needle
j = 0;
}
i++;
}
// If no match is found, return NULL
return (NULL);
}
// A main function to test the _strstr function
int main(void)
{
char *haystack = "hello world";
char *needle = "world";
char *result;
result = _strstr(haystack, needle);
printf("%s\n", result);
return (0);
}
