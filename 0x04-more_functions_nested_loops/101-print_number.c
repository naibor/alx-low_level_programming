#include "main.h"
/**
 * print_number - Function
 *
 * Description: prints an integer.
 *
 * @n: parameter of type int,n
 *
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
	{
		_putchar(n % 10 + '0');
	}
}
