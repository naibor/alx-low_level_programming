#include "main.h"
/**
 * _puts - Function
 *
 * Description: Prints a string then a new line to stdout
 *
 * @str: pointer parameter of type char, str
 *
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);

	}

	_putchar('\n');
}
