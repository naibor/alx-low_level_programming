#include "main.h"
/**
 * print_triangle - Function
 *
 * Description: prints a triangle then a new line
 *
 * @size: parameter of type int, size
 *
 */
void print_triangle(int size)
{
	int x, i;
	int y = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		x = 0;
		while (x < size)
		{
			for (i = 0; i < size; i++)
			{
				if (i < y)
				{
					_putchar(' ');
				} else
				{
					_putchar('#');
				}
			}
			y--;
			_putchar('\n');
			x++;
		}
	}
}
