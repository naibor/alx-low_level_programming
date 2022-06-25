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
	if (argc > 1)
	{
		printf("X:%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
