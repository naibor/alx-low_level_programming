#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 to 100.
 * prints Fizz for multiples of 3.
 * prints Buzz for multiples of 5.
 * prints FIzzBuzz for multioples of both 3 and 5.
 *
 * Return: returns 0
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
