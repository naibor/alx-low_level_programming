#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * return: returns void
 */

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);
	_putchar('\n');
}
