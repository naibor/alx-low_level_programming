#include "main.h"
/**
 * print_to_98 - Function
 *
 * Description:  prints all natural numbers from n to 98, followed by a new line.
 *
 * @n: parameter of type int, name n
 *
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
	}
}
