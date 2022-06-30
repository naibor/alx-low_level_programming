#include "main.h"
/**
 * array_range - Function
 *
 * Description: creates an array of integers.
 *
 * @min: parameter of type int
 * @max: parameter of type int
 *
 * Return: returns NULL if min > max or if fail, else a pointer
 */
int *array_range(int min, int max)
{
	int *alloc, x, count = 0;

	/*check if min > max return NULL*/
	if (min > max)
		return (NULL);
	/*find the number of values in array*/
	for (x = min; x <= max; x++)
		count++;
	/*allocate memory and check memory*/
	alloc = malloc(sizeof(int) * count);
	if (alloc == NULL)
		return (NULL);
	for (x = min; x <= max; x++)
		alloc[x] = x;

	return (alloc);

}
