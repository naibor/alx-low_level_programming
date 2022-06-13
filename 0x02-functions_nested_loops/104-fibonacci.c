#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * followed by a new line
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, n, m, n1, j2, m1, k2;

	n = 1;
	m = 2;

	printf("%lu", n);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", m);
		m = m + n;
		n = m - n;
	}

	n1 = n / 1000000000;
	j2 = n % 1000000000;
	m1 = m / 1000000000;
	k2 = m % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", m1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		m1 = m1 + n1;
		n1 = m1 - n1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
