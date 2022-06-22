#include "main.h"
/**
 * _print_rev_recursion - Function
 *
 * Description: prints a string in reverse.
 *
 * @s: pointer parameter of type char,
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
