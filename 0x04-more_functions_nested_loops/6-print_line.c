#include "main.h"
/**
 * print_line - Function
 *
 * Description: draws a straight line in the terminal.
 *
 * @n: parameter of type int, n
 *
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
