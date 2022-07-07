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
		if (!current)
			printf("(nil)");
		if (separator == NULL)
		{
			printf("%s", current);
		}
		else if (separator && i == 0)
			printf("%s", current);
		else
			printf("%s%s", separator, current);
	}
	printf("\n");
	va_end(str);
}
