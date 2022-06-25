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
	int x, y, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{	x = atoi(argv[1]);
		y = atoi(argv[2]);
		mul = x * y;		
		printf("%d\n", mul);
	}
	return (0);
}
