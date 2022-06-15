#include "main.h"
/**
 * *_strncat - Function
 *
 * Description: concatenates two strings
 * it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @src: pointer parameter of type char
 * @dest: pointer parameter of type char
 * @n: parameter of type int
 *
 * Return: Returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int x;
	char *ch = dest;
	char *st = src;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		len++;
		src++;
	}

	if (n > len)
	{
		n = len;
	}

	src = st;

	for (x = 0; x < n; x++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (ch);
}
