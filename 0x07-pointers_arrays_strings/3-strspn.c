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
		tag = 0;
		while (*s)
		{
			if (*s == *accept)
			{
				bytes++;
				tag = 1;
				break;
			}
			s++;
		}
		accept++;
		s = reset;
		if (tag == 0)
		{
			break;
		}

	}
	return (bytes);
}
