#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * description:  Assigns a random number to variable n
 *	 checks if number is positive, negative or zero
 *
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n < 0) /*check if negative*/
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0) /*check if positive*/
	{
		printf("%d is positive\n", n);
	} else /*if zero*/
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
