#include "main.h"
/**
 * reverse_array - Function
 *
 * Description: reverses the content of an array of integers.
 *
 * @a: pointer parameter of type int
 * @n: parameter of type int, number of elements in the array
 *
 */
void reverse_array(int *a, int n)
{
	int x, i, temp, j = 0;

	if (n % 2 == 0)
	{
		i = (n - 1) / 2;
	}
	else
	{
		i = n / 2;
	}
	for (x = n - 1; x > i; x--)
	{
		temp = a[j];
		a[j] = a[x];
		a[x] = temp;
		j++;
	}
}
