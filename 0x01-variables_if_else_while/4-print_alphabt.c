#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase except q, e
 *
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar (ch);
		}
	}
	putchar (\n);

	return (0);
}
