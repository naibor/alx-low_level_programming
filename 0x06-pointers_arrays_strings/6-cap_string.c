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
	char *ch = str;
	int x, i = 0;
	char separator[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (ch[i] != '\0')
	{
		for (x = 0; x < 13; x++)
		{
			if (ch[i] == separator[x])
			{
				if (ch[i + 1] >= 97 && ch[i + 1] <= 122)
				{
					ch[i + 1] -= 32;
				}
			}
		}

	i++;
	}
	return (ch);
}
