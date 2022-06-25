#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: multiplies two numbers
 * print result then new line
 * program does not receive two argument, print Error then a new line, return
 *
 * @argc: parameter of type int
 * @argv:pointer parameter of type char
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (_atoi(argv[1]) * _atoi(argv[2])));
	}
	return (0);
}
/**
 * _atoi - Function
 *
 * Description: convert a string to an integer.
 *
 * @s: pointer parameter of type char ,s
 *
 * Return: returns 0 if no string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int i = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			i = (i * 10) + (*s - '0');
		}
		else if (i > 0)
		{
			break;
		}
	} while (*s++);
	return (i * sign);
}
