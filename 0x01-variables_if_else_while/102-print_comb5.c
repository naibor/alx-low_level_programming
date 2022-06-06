#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:prints all possible combinations of two two-digit numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	int y;

	for (i = 0 ; i < 98 ; i++)
	{
		for (y = i + 1 ; y <= 99 ; y++)
		{
			putchar((i / 10) + '0');
			/*the y%10 prints the last digit of y*/
			putchar((y % 10) + '0');
			putchar(' ');
			putchar((i / 10) + '0');
			putchar((y % 10) + '0');
			if (i == 98 && y == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
