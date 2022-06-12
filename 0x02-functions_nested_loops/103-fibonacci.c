#include <stdio.h>
/**
 * main - entry point
 *
 * Description: find fibonacci sequence of 50 numbers
 *
 * Return: returns 0
 */
int main(void)
{
	long int first, second, next, sum;

	first = 1;
	second = 2;
	next = first + second;
	while (next < 4000000)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%ld\n", sum + 2);

	return (0);
}
