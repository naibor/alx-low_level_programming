#include "main.h"
/**
 * _strlen - Function
 *
 * Description: Gets the length of a string
 *
 * @s: pointer parameter of type char, s.
 *
 * Return: returns an int, the string length
 */
int _strlen(char *s)
{
	int x;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
