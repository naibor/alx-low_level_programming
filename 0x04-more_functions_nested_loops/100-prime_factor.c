#include "main.h"
/**
 * main - Entry point
 *
 * Description: finds and prints the largest prime factor
 *  of the number 612852475143
 *  followed by a new line
 *
 * Return: returns 0
 *
 */

int main(void)
{
	long int x;
	long int n = 612852475143;

	for (x = 3 ; x < 12057; x += 2)
	{
		while (n % x == 0 && n != 0)
		{
			n /= x;
		}

	}
	printf("%ld\n", n);
	return (0);
}
