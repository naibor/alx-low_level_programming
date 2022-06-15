#include "main.h"
/**
 * _strcat - Function
 *
 * Description:  concatenates two strings.
 *
 * @src: pointer parameter of type char, to be appended to dest
 * @dest: pointer parameter of type char
 *
 * Return: returns resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ch = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (ch);
}
