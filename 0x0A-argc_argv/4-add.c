#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main -Entry point
 *
 * Description: adds positive numbers.
 * Print the result, then a line
 * If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits, print Error
 *
 * @argc: parameter of type int
 * @argv: pointer parameter of type char
 *
 * Return: returns 1 if error
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argv[argc][i]; i++)
		{
			if (_isdigit(argv[argc][i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += _atoi(argv[argc]);
		printf("%d\n", sum);
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * _isdigit - Function
 *
 * Description: checks for a digit (0 through 9)
 *
 * @c: parameter of type int, name c
 *
 * Return: returns 1 if true and 0 otherwise
 */
int _isdigit(int c)
{
	int res;

	if (c >= '0' && c <= '9')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
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
