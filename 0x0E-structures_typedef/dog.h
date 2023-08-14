#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - a new type describing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Longer description
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

#endif /* DOG_H */

