#include "main.h"
/**
 * *_strncpy - Function
 *
 * Description: Copies a string
 *
 * @dest: pointer parameter of type char
 * @src: pointer parameter of type char
 * @n: parameter of type int, number of times to copy.
 *
 * Return: Returns char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
