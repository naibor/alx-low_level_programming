#include "main.h"
/**
 * str_concat - Function
 *
 * Description: concatenates two strings
 *
 * @s1: pointer parameter of type char, one of the strings
 * @s2: pointer parameter of type char, the othe string
 *
 * Return: returns NULL if failure, pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str1 = s1, *str2 = s2, *both;
	unsigned int len = 0, len2 = 0, length = 0, x;

	while (*str1)
	{
		len++;
		str1++;
	}
	if (str1 == NULL)
	{
		str1 = "";
	}
	while (*str2)
	{
		len2++;
		str2++;
	}
	if (str2 == NULL)
	{
		str2 = "";
	}
	length = len + len2;
	both = malloc(sizeof(char) * (length + 1));
	str1 = both;
	if (both == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < length; x++)
	{
		if (x < len)
		{
			both[x] = str1[x];
		}
		else
		{
			both[x] = str2[x];
		}
		return (both);
	}

	return (both);
}
