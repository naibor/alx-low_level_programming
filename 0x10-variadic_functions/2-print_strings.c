#include "variadic_functions.h"
/**
 * print_strings - Function
 *
 * Description: prints strings, followed by a new line
 *
 * @separator: constant pointer parameter of type char
 * @n: parameter of type unsigned int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *current;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		current = va_arg(str, char *);
		if (current == NULL)
			printf("(nil)");
		else
			printf("%s", current);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
