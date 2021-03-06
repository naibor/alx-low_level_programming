#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - new type called dog
 * @name: pointer member of type char,name of dog
 * @age: member of type float, age of dog
 * @owner: pointer member of type char, owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
