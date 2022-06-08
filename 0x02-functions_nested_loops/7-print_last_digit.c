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
		l = -1 * (n % 10);
	else
		l = n % 10;

	_putchar((l % 10) + '0');
	return (l % 10);
}
