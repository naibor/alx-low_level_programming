#include "main.h"
/**
 * get_endianness - Function
 *
 * Description: checks endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);
	return (0);
}
