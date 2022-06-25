#include "main.h"
/**
 * main -Entry point
 *
 * Description: prints all arguments it receives.
 *
 * @argc: parameter of type int
 * @argv: pointer parameter of type char
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
