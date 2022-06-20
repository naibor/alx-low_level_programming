#include "main.h"
/**
 * _strpbrk - Function
 *
 * Description: searches a string for any of a set of bytes
 *
 * @s: pointer parameter of type char, the string to search
 * @accept: pointer parameter of type char, what to search for
 *
 * Return: returns pointer to bytes  else null
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int bytes;
	char *reset = accept;
	int tag;

	while (*s)
	{
		tag = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				bytes++;
				tag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = reset;

		if (tag == 1)
		{
			return (s - 1);
		}
	}
	return (NULL);
}
