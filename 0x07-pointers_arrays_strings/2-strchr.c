#include "main.h"
/**
 * _strchr - Function
 *
 * Description: locates a character in a string
 *
 * @s: pointer parameter of type char, string to check
 * @c: parameter of type int, char to chech for
 *
 * Return: returns first occurance of char else Null
 */
char *_strchr(char *s, char c)
{
	int count = 0;

	while (*s)
	{
		if ((*s == c) && (count == 0))
		{
			return (s);
			count++;
		}
		s++;
	}
	return (NULL);
}
