#include "main.h"
/**
 * print_last_digit - Function
 *
 * Description: prints the last digit of a number
 *
 * @n: parameter of type int, name n.
 *
 * Return: returns value of last digit
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		n = n * -1;
		l = n % 10;
		_putchar(l + '0');
	}
	if (l < 0)
	{
		l = l * -1;
	}

	_putchar(l + '0');
	return (l);
}
