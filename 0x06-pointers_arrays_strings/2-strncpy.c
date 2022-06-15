#include "main.h"
/**
 * *_strncpy - Function
 *
 * Description: Copies a string
 *
 * @dest: pointer parameter of type char
 * @src: pointer parameter of type char
 * @n: parameter of type int
 *
 * Return: Returns char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i;
	char *ch = dest;
	char *st = src;

	while (*src)
	{
		src++;
		len++;

	}
	len = len + 1;

	if (n > len)
	{
		n = len;
	}

	src = st;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	return (ch);
}
