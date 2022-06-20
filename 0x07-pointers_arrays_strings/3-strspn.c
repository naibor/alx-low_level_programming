#include "main.h"
/**
 * _strspn - Function
 *
 * Description: gets the length of a prefix substring
 *
 * @s: pointer parameter of type char
 * @accept: pointer parameter of type char
 *
 * Return: returns bytes in unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes;
	char *reset = accept;
	int i;

	while (*s)
	{
		while (*accept)
		{
			i = 0;
			if (*s == *accept)
			{
				bytes++;
				i = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = reset;
		if (i == 0)
			break;
	}
	return (bytes);
}
