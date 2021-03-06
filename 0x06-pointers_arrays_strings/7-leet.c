#include "main.h"
/**
 * *leet - Function
 *
 * Description: encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @str: pointer parameter of type char, input string
 *
 * Return: returns char
 */
char *leet(char *str)
{
	char *ch = str;
	int x, i = 0;

	/**
	 * char encode[10] = {'a', 'A', 'e', 'E', '0', 'o', 't', 'T', 'l', 'L'};
	 * char code[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	 */

	  char encode[] = "aAeEoOtTlL";
	  char code[] = "4433007711";

	while (ch[i] != '\0')
	{
		x = 0;
		while (x < 10)
		{
			if (ch[i] == encode[x])
			{
				ch[i] = code[x];
			}
		x++;
		}
	i++;
	}

	return (ch);

}
