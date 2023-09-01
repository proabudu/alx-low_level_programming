CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

OBJECTS = _putchar.o _islower.o _isalpha.o _abs.o _isupper.o _isdigit.o _strlen.o _puts.o _strcpy.o _atoi.o _strcat.o _strncat.o _strncpy.o _strcmp.o _memset.o _memcpy.o _strchr.o _strspn.o _strpbrk.o _strstr.o

all: libmy.a

libmy.a: $(OBJECTS)
ar -rcs libmy.a $(OBJECTS)

clean:
rm -f $(OBJECTS) libmy.a

