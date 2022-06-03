#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase.
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	char hx;

	for (i = 0; i < 10 ; i++)
	{
		putchar (i + '0');
	}
	for (hx = 'a'; hx <= 'f' ; hx++)
	{
		putchar (hx);
	}
	putchar ('\n');

	return (0);
}
