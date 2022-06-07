#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: returns 0
 */

int main(void)
{
	char ch [8]="_putchar";
	int i;
	
	for (i = 0 ; i < 9 ; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');

	return (0);


}
