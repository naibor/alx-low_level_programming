#include "main.h"
/**
 * print_buffer - Function
 *
 * Description:  prints a buffer.
 * print 10 bytes per line
 * line starts with position of the first byte of the line
 * in hexadecimal starting with 0
 * line shows the hexadecimal content
 * 2 char nof the buffer, 2bytes at a time
 * end with a new line
 *
 * @b: pointer parameter of type char,
 * @size: parameter of type int
 *
 */
void print_buffer(char *b, int size)
{
	int byte, i;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);
		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				printf("  ");

			else
				printf("%02x", *(b + i + byte));

			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}

		for (i = 0; i < 10; i++)
		{
			if ((i + byte) >= size)
				break;

			else if (*(b + i + byte) >= 31 &&
				 *(b + i + byte) <= 126)
				printf("%c", *(b + i + byte));

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}

