#include "main.h"
/**
 * set_bit - Function
 *
 * Description: sets the value of a bit to 1 at a given index.
 *
 * @n: pointer of type unsigned long int
 * @index: parameter of type unsigned int
 *
 * Return: returns 1 if success and -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bit = 1 << index;
	*n = *n | bit;

	return (1);
}
