#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	int y;

	for (i = '0' ; i < '9' ; i++)
	{
		for (y = i + 1 ; y <= '9' ; y++)
		{
			putchar(i);
			putchar(y);
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
