#include"main.h"
/**
 * rot13 - Function
 *
 * Description: encodes a string using rot13
 *
 * @str: pointer parameter of type char, string input
 *
 * Return: returns char, resulting string
 */
char *rot13(char *str)
{
	char *ch = str;
	int i = 0, x;
	char input[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (ch[i] != '\0')
	{
		for (x = 0; x < 53; x++)
			if (ch[i] == input[x])
			{
				ch[i] = output[x];
				break;
			}
	i++;
	}
	return (ch);
}
