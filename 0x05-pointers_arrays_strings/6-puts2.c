#include "main.h"
/**
 * puts2 - Function
 *
 * Description: prints every other character of a string
 * starting with the first character, then a new line
 *
 * @str: pointer parameter of type char, str
 *
 */
void puts2(char *str)
{
	int i;
	int x = 0;

	while (str[x] != '\0')
	{
		for (i = x; i % 2 == 0; i++)
		{
			_putchar(str[i]);
		}
		x++;
	}
	_putchar('\n');
}
