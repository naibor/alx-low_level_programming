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
	int start = 0;

	while (*needle)
	{
		while (*haystack)
		{
			if (*needle == *haystack)
			{
				start++;
				break;
			}
			else if ((*needle != *haystack) && (start < 0))
			{
				return (NULL);

			}

		haystack++;
		}
	needle++;
	}
	return (needle - start);
}
