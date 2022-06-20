#include "main.h"
/**
 * _memset - Function
 *
 * Description: fills memory with a constant byte
 *
 * @s: pointer parameter of type char, points to where to fill
 * @b: parameter of type char,what to fill memory with
 * @n: parameter of type unsigned int, number of bytes
 *
 * Return: returns pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ch = s;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (ch);

}
