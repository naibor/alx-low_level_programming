#include "main.h"
/**
 * print_array - Function
 *
 * Description: prints n elements of an array of integers, then a new line
 *
 * @a: pointer parameter of type int, a
 * @n: parameter of type int, n
 *
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;

		printf(", ");

	}
	printf("\n");
}
