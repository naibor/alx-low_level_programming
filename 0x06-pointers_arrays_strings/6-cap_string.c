#include "main.h"
/**
 * *cap_string - Function
 *
 * Description: capitalizes all words of a string.
 *
 * @str: pointer param of type char, input string
 * Return: returns char
 */
char *cap_string(char *str)
{
	/*char *ch = str;*/
	int x, i = 0;
	char separator[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		for (x = 0; x <= 12; x++)
		{
			if (str[i] == separator[x])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] += 32;
				}
			}
		}

	i++;
	}
	return (str);
}
