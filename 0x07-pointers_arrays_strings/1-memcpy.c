#include "main.h"
/**
 * _memcpy - Function
 *
 * Description: copies memory area
 *
 * @dest: pointer parameter of type char, area to be copied in
 * @src: pointer parameter of type char, area of what to copy
 * @n: parameter of type unsigned int, number of bytes to copy
 *
 * Return: returns pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ch = dest;

	while (n--)
	{
		*dest += *src;
	}
	return (ch);
}
