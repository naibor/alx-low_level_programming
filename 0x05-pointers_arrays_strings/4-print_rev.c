#include "main.h"
/**
 * print_rev - Function
 *
 * Description: Prints a string in reverse, then a new line
 *
 * @s: pointer parameter of type char, str
 *
 */
void print_rev(char *s)
{
	int x;
	int i;

	for (x = 0; s[x] != '\0'; x++)
	{

	}
	for (i = x-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
