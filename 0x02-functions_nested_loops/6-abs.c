#include "main.h"
/**
 * _abs - Function
 *
 * Description:  computes the absolute value of an integer
 *
 * Return: returns 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (n *-1);
		_putchar(n);
	}
	_putchar(n);

	return (0);
}
