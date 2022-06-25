#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints the number of arguments passed into it.
 *
 * @argc: parameter of type int
 * @argv: pointer parameter of type char
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
