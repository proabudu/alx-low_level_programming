#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

char *leet(char *);
char *leet(char *str) {
if (str == NULL) {
return (NULL);
}
char *leetspeak = "43107";
char *letters = "aeotlAEOTL";
for (size_t i = 0; str[i] != '\0'; i++) {
for (size_t j = 0; j < strlen(letters); j++) {
if (str[i] == letters[j]) {
str[i] = leetspeak[j % 5];
break;
}
}
}
return (str);
}

