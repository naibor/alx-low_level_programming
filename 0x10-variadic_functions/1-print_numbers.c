#include "variadic_functions.h"
/**
 * print_numbers -  Function
 *
 * Description: prints numbers followed by a new line
 *
 * @separator: constant pointer parameter of type char
 * @n: constant parameter of type unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
