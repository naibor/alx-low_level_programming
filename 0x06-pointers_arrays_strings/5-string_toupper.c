#include "main.h"
/**
 * string_toupper - Function
 *
 * Description:  changes all lowercase letters of a string to uppercase
 *
 * @str: pointer parameter of type char, string input
 *
 * Return: returns char
 */
char *string_toupper(char *str)
{
	char *ch = str;
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 32;
		}
		i++;
	}

	return (ch);
}
