#include "main.h"
/**
 * _strstr - Function
 *
 * Description:  locates a substring.
 * finds the first occurance of substring
 *
 * @haystack: pointer parameter of type char, where to search
 * @needle: pointer parameter of type char, what to search
 *
 * Return: returns pointer to the beginning if found else null
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = haystack + 1;
	}
	return (NULL);
}
