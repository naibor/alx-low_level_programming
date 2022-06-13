#include "main.h"
/**
 * rev_string - Function
 *
 * Description: Reverses a string
 *
 * @s: pointer parameter of type char, s
 *
 */
void rev_string(char *s)
{
	int x = 0, i = 0;
	char ch;

	while (s[x] != '\0')
		x++;

	while (i < x--)
	{
		ch = s[i];
		s[i++] = s[x];
		s[len] = ch;
	}
}
