#include "main.h"
/**
 * get_bit - Function
 *
 * Description: gets the value of a bit at a given index.
 *
 * @index: parameter of type unsigned int
 * @n: parameter of type unsigned long int
 *
 * Return: returns the value of the bit at index or -1 if fail
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
