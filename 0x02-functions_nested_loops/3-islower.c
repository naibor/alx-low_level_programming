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
	char ch;
	int result;
	
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		if (c == 'Z')
		{
			_putchar(c);
			result = 0;
		}
		result = 1;
	}
	return (result);
}
