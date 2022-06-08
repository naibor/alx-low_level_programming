#include "main.h"
/**
 * print_times_table - Function
 *
 * Description: prints the n times table, starting with 0
 *
 * @n: parameter of type int, name n
 */

void print_times_table(int n)
{

	int y, k;

	if (n > 0 && n < 15)
	{
		for (y = 1; y <= n; y++)
		{
			_putchar('0');
			for (k = 1; k <= n; k++)
				formater(y * k);
			_putchar('\n');
		}
	}
}



/**
 * formater - Function
 *
 * Description: Formats the characters output
 *
 * @x: parameter of type int, name x
 */

void formater(int x)
{
	if (x <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(x + '0');
	}
	else if (x > 9 && x <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(x / 10 + '0');
		_putchar(x % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(x / 100 + '0');
		_putchar(x / 10 % 10 + '0');
		_putchar(x % 10 + '0');
	}

}

