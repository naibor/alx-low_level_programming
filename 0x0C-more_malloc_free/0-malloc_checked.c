#include "main.h"
/**
 * malloc_checked - Function
 *
 * Description: allocates memory using malloc
 *
 * @b: parameter of type unsigned int
 *
 * Return: returns status value 98 if fails.
 */
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}
	return (alloc);
}
