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

	/*last digit*/
	int l;

	l = n % 10; /*calculate last digit of n*/

	if (l > 5) /*it's greater than 5*/
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	} else if (l == 0) /*it's zero*/
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	} else if (l < 6 && l != 0) /*it's less than 6 and not 0*/
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}

	return (0);
}
