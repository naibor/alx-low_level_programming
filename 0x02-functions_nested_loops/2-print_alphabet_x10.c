#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function
 *
 * Description: prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int y = 0;

	while(y < 10)
	{
		for(alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		y++;
	}
}
