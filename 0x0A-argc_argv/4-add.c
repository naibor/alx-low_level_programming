#include "main.h"
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
	while (argc > 1)
	{
		for (i = 1; i < argv[argc][i]; i++)
		{
			if (isdigit(argv[argc][i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
		argc--;
		printf("%d\n", sum);
	}
	printf("%d\n", sum);
	return (0);
}
