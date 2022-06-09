#include "main.h"
/**
 * more_numbers - Fucntion
 *
 * Description: prints 10 times, numbers, from 0 to 14, then a new line.
 *
 */
void more_numbers(void)
{
	int y;
	int x;

	y = 0;
	while (y < 10)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
		y++;
	}
}
