#include "main.h"
/**
 * main - Entry point
 *
 * Description: prints program name, followed by a new line.
 *
 * @argc: parameter of type int
 * @argv: pointer parameter of type char
 *
 * Return: returns 0
 */
int main(int argc, char* argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
