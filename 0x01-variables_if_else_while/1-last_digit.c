#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Assign a random number to the variable n
 *
 * print: The last digit of the number stored in the variable n
 *
 * Return: returns 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5) /*it's greater than 5*/
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	} else if (n % 10 == 0) /*it's zero*/
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	} else if (n % 10 < 6 && n % 10 != 0) /*it's less than 6 and not 0*/
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}

	return (0);
}
