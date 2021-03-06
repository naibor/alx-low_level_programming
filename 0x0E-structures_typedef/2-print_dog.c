#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Function
 *
 * Description: prints a struct dog
 *
 * @d: pointer parameter of type dog
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\nAge: %0.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
