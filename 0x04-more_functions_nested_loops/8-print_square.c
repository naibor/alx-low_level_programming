#include "main.h"
/**
 * print_square - Function
 *
 * Description: prints a square, followed by a new line.
 *
 * @size: paremeter of type int, size
 *
 */
void print_square(int size)
{
	int y, x;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		x = 0;
		while (x < size)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
		x++;
		_putchar('\n');
		}
	}
}
