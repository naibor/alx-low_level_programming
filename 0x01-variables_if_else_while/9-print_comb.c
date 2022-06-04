#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers.
 *
 * Return: returns 0
 */
int main(void)
{
	int i;

	i = 0;
	do {
		putchar (i + '0');
		if (i != 9)
		{
			putchar (',');
			putchar (' ');
		}
		i++;
	} while (i < 10);
	putchar ('\n');

	return (0);
}
