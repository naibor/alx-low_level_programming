#ifndef DOG_H
#define DOG_H
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

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
