#include "main.h"
/**
 * _realloc - Function
 *
 * Description: reallocates a memory block using malloc and free
 *
 * @ptr: pointer parameter of type void, previous memory location
 * @old_size: parameter of type unsigned int, size in byte of ptr
 * @new_size: parameter of type unsigned int, size in byte of new memory
 *
 * Return: returns pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *alloc;
	char *buffer, *ptr2;
	unsigned int i;

	/*If new_size  == 0 && ptr is not NULL, free(ptr). Return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*If new_size == old_size do not do anything and return ptr*/
	if (new_size == old_size)
		return (ptr);
	/*when ptr is NULL malloc(new_size) for both new and old size*/
	if (ptr == NULL)
	{
		alloc = malloc(new_size);
		if (alloc == NULL)
		{
			free(alloc);
			return (NULL);
		}
		return (alloc);
	}
	/*create a copty for ptri, allocate memory and check it*/
	ptr2 = ptr;
	alloc = malloc(sizeof(*ptr2) * new_size);
	if (alloc == NULL)
	{
		free(ptr);
		return (NULL);
	}
	buffer = alloc;
	for (i = 0; i < old_size && i < new_size; i++)
		buffer[i] = *ptr2++;
	free(ptr);
	return (alloc);
}
