#include "main.h"
/**
 * print_sign - Function
 *
 * Description: prints the sign of a number
 *
 * @n: parameter of type int, called n
 *
 * Return: returns 0 if n is zero,
 * 1 if n is greater than zero,
 * -1 if n is less than zero
 *
 */
int print_sign(int n)
{
	char result = 0;

	if (n < 0)
	{
		result = -1;
		_putchar('-');

	} else if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else
	{
		result = 0;
		_putchar('0');
	}

	return (result);
}
