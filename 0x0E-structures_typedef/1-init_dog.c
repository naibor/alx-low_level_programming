#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Function
 *
 * Description: initialize a variable of type struct dog
 *
 * @d: pointer parameter of type struct dog
 * @name: pointer parameter of type char
 * @age: parameter of type float
 * @owner: pointer parameter of type char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;

}
