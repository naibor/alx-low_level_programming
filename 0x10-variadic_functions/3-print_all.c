#include "variadic_functions.h"
/**
 * print_all - Function
 *
 * Description: prints anything
 *
 * @format: constant parameter format
 *format is a list of types of arguments passed in function
 *c:char
 *i:integer
 *f:float
 *s:char *
 */
void print_all(const char * const format, ...)
{
	va_list a_list;
	char *str;
	int i = 0;

	va_start(a_list, format);
	while (format == NULL)
		printf("\n");
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				break;
			case 'i':
				printf("%d", va_arg(a_list, int));
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				break;
			case 's':
				str = va_arg(a_list, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
i++;

	}
	va_end(a_list);
	printf("\n");
}

