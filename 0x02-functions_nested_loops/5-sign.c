#include "main.h"
/**
 * print_sign - Function
 *
 * Description: prints the sign of a number
 *
 * @n: parameter of type int, called n
 *
 * Result: returns 0 if n is zero,
 * 1 if n is greater than zero,
 * -1 if n is less than zero
 *
 */
int print_sign(int n)
{
	int result = 0;

	if (n < 0)
	{
		result = -1;

	}else if (n > 0)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	
	return (result);
}
