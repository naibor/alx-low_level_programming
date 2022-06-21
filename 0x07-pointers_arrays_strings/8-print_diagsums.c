#include "main.h"
/**
 * print_diagsums - Function
 *
 * Description: prints the sum of two diagonals of a square matrix of integers
 *
 * @a: pointer parameter of type int,
 * @size: parameter of type int
 *
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
