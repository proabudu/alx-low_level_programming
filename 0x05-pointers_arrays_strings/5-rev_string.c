void rev_string(char *s)
{
int length = 0;
char temp;
while (s[length] != '\0')
{
length++;
}
for (int i = 0, j = length - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}

