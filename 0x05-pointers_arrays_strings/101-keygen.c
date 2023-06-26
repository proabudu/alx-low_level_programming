#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
char *generate_password()
{
static const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char *password = malloc((PASSWORD_LENGTH + 1) * sizeof(char));
if (password == NULL)
{
fprintf(stderr, "Memory allocation failed.\n");
exit(1);
}
srand(time(NULL));
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int random_index = rand() % (sizeof(characters) - 1);
password[i] = characters[random_index];
}
password[PASSWORD_LENGTH] = '\0';
return password;
}
int main()
{
char *password = generate_password();
printf("Generated password: %s\n", password);
free(password);
return 0;
}

