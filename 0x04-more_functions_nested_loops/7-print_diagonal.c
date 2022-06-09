#include "main.h"
/**
 * print_diagonal - Function
 *
 * Description: draws a diagonal line on the terminal.
 *
 * @n: parameter of type int, n
 *
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		y = 0;
		while (y < n)
		{
			for (x = 0; x < n ; x++)
			{
				if (x == y)
				{
					_putchar('\\');
				} else if (x < y)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
			y++;
		}

	} else
	{
		_putchar('\n');
	}
}
