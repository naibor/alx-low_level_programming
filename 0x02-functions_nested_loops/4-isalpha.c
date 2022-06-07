#include "main.h"
/**
 * _isalpha - function
 *
 * Description: checks for alphabetic character
 *
 * @c: parameter of type int, called c
 *
 * Return: returns 0 if false, 1 if true
 */
int _isalpha(int c)
{
	char ch ;
	char CH ;
	int result = 0;	

	for (ch = 'a'; ch <= 'z' ; ch ++)
	{
		for (CH = 'A' ; CH <= 'Z'; CH++)
		{
			if (c == CH || c == ch)
			{
				result = 1;
			}
		}
	}
	return (result);
}
