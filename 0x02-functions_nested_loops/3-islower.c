#include <stdio.h>
#include "main.h"
/**
 * _islower - function
 *
 * Description: checks for lowercase character.
 *
 * Return: returns 1 if 'c' is lower otherwise 0
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		return (0);
	}
	return (1);
}
