#include "main.h"
/**
 * _strcmp - Function
 *
 * Description: compares two strings.
 *
 * @s1: pointer parameter of type char
 * @s2: pointer parameter of type char
 *
 * Return: returns +int when greater than,
 * -int when less than, and 0 when greater.
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}

	return (*s1 - *s2);


}

