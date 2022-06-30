#include "main.h"
/**
 * _calloc - Function
 *
 * Description: allocates memory for an array, using malloc
 *
 * @nmemb: parameter of type unsigned int, the array
 * @size: parameter of type usigned int, size of bytes
 *
 * Return: returns a pointer and NULL if size  = 0 or fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;

	/*when size or nmemb is 0 return null*/
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	/*allocate memory and check if it's Null*/
	alloc = malloc(nmemb * size);
	if (alloc == NULL)
	{
		return (NULL);
	}
	return (alloc);

}
