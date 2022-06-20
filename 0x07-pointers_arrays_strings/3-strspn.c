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
	unsigned int bytes = 1;
	char *reset = s;
	int tag;

	while (*accept)
	{
		while (*s)
		{
			if (*s == *accept)
			{
				bytes++;
				break;
			}
			s++;
		}
		accept++;
		s = reset;
		
	}
	return (bytes);
}
