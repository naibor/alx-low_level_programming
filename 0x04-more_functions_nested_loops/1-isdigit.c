#include "main.h"
/**
 * _isdigit - Function
 *
 * Description: checks for a digit (0 through 9)
 *
 * @c: parameter of type int, name c
 *
 * Return: returns 1 if true and 0 otherwise
 */

int _isdigit(int c)
{
	int res;

	if (c >= '0' && c <= '9')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	
	return (res);
}
