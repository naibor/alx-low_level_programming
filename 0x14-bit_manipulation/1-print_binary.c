#include "main.h"
/**
 * print_binary - Function
 *
 * Description: prints the binary representation of a number.
 *
 * @n: unsigned long int, the number to convert
 *
 */
void print_binary(unsigned long int n)
{
	int x = 11, res;

	for (; x >= 0; x--)
	{
		res = n >> x;

		if (res & 1)
			_putchar('1');
		else
			_putchar('0');
	}
	_putchar('\n');
}
