#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: multiplies two positive numbers
 *
 * @argc: parameter of type int
 * @argv: pointer parameter of type char
 *
 * Return: returns error if arguments are incorrect
 */
int main(int argc, char **argv)
{

	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
		return (0);
	}
}
