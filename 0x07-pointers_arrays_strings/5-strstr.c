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
	char *hay = haystack;
	char *need = needle;

	while (*haystack)
	{
		hay = haystack;
		needle = need;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = hay + 1;

	}
	return (NULL);
}
