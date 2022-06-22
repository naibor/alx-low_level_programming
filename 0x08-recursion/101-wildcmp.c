#include "main.h"
/**
 * wildcmp - Function
 *
 * Description: compares two strings checks if they are identical
 *
 * @s1: Pointer parameter of type char
 * @s2: pointer parameter of type char
 *
 * Return: returns 1 if success else 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
	{
		return (1);
	}
	if (*s2 == '*' && *(s1 + 1) && *s2)
	{
		return (0);
	}
	return (0);
}
