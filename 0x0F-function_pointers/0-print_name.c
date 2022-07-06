#include "function_pointers.h"
/**
 * print_name - Function
 *
 * Description: prints a name
 *
 * @name: pointer parameter of type char, name to be printed
 * @f: a pointer function, that returns void
 * with pointer parameter of type char
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
