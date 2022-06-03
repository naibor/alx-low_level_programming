#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse.
 *
 * Return: returns 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a' ; ch--)
	{
		putchar (ch);
	}
	putchar ('\n');

	return (0);
}
