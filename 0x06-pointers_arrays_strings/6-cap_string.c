#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

char *cap_string(char *);
bool is_separator(char c) {
return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '.' ||
c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' || c == '}');
}
char *cap_string(char *str) {
if (str == NULL) {
return (NULL);
}
size_t len = strlen(str);
bool capitalize_next = true;
for (size_t i = 0; i < len; i++) {
if (is_separator(str[i])) {
capitalize_next = true;
} else if (capitalize_next) {
str[i] = toupper(str[i]);
capitalize_next = false;
}
}
return str;
}

