#include <stdio.h>
#include "main.h"
/**
 * _islower - function
 * Description: checks for lowercase character.
 *
 * @c: Type int, name c
 *
 * Return: returns 1 if 'c' is lower otherwise 0
 */
int _islower(int c)
{
	char ch;
	int result = 0;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch == c)
			result = 1;
	}
	return (result);
}
