#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all different combinations of three digits
 *
 * Return: returns 0
 *
 */
int main(void)
{
	int i, y, x;

	for (i = '0' ; i < '9' ; i++)
	{
		for (y = i + 1 ; y <= '9' ; y++)
		{
			for (x = y + 1 ; x <= '9' ; x++)
			{
				putchar(i);
				putchar(y);
				putchar(x);
				if (i == '7' && y == '8' && x == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');


	return (0);
}
