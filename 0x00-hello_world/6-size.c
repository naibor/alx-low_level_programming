#include<stdio.h>
/**
 * main - Entry point of program.
 * Description: Prints size of various types on computer.
 *
 * Return: returns 0
 */
int main(void)
{
	char c;
	int i;
	long int x;
	long long int y;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
