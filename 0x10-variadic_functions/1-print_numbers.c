#include "variadic_functions.h"
/**
 * print_numbers -  Function
 *
 * Description: prints numbers followed by a new line
 *
 * @separator: constant pointer parameter of type char
 * @n: constant parameter of type int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	int i = n;

	if (separator != NULL)
	{
		va_start(numbers, n);
		while (i != 0)
		{
			if (i == 1)
				printf("%d", va_arg(numbers, int));
			else
			{
				printf("%d", va_arg(numbers, int));
				printf("%s", separator);
			}
			i--;

		}
		printf("\n");
		va_end(numbers);
	}

}
