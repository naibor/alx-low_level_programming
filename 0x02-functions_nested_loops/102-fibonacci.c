#include <stdio.h>

/**
 * main - Entry point
 *  
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * 
 * Return: returns 0 (Success)
 */
int main(void)
{
	long int i, m, n, next;

	m = 1;
	n = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (m != 20365011074)
		{
			printf("%ld, ", m);
		} else
		{
			printf("%ld\n", m);
		}
		next = m + n;
		m = n;
		n = next;
	}

	return (0);
}
