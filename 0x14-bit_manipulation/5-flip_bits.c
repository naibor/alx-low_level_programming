#include "main.h"
/**
 * flip_bits - Function
 *
 * Description: gets the number of bits needed to
 * flip to get from one number to another.
 *
 * @n: parameter of type unsigned long int
 * @m: parameter of type unsigned long int
 *
 * Return: returns number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int dif = m ^ n, bit = 0;

	while (dif > 0)
	{
		bit += (dif & 1);
		dif >>= 1;
	}
	return (bit);
}
