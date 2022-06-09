#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int result = 0;
	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	} else
	{
	result = 0;
	}

	return (result);
}
