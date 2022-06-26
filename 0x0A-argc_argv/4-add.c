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
int main(int argc, char *argv[])
{
	int num, sum = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (argv[argc][i] > '9' || argv[argc][i] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
