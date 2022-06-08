#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the sum of the even-valued terms
 * Return: returns 0
 */

int main(void)
{
	int x;
	long int fib[50], sum = 2;

	fib[0] = 1;
	fib[1] = 2;

	for (x = 2; x < 50; x++)
	{
		fib[x] = fib[x - 1] + fib[x - 2];
		if ((fib[x] % 2) == 0 && fib[x] < 4000000)
			sum += fib[x];
	}
	printf("%ld\n", sum);

	return (0);
}
