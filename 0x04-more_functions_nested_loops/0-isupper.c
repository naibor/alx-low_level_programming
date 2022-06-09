#include "main.h"
/**
 * _isupper - Function
 *
 * Description: Checks for uppercase characters
 *
 * @c: parameter of type int, name c.
 *
 * Return: returns 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
	{
		res = 1;
	} else
	{
		res = 0;
	}

	return (res);
}
