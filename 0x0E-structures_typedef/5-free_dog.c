#include "dog.h"
/**
 * free_dog - Function
 *
 * Description: frees dogs from memory
 *
 * @d: pointer parameter of type dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
