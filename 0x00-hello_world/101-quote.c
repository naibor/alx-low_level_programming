#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point of program
 *
 * description: A program that prints to the standard error
 *
 * Return: Should return 1
 */

int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int n = sizeof(msg) - 1; /* -1 to remove the newline counted by sizeof*/

	fwrite(msg, n, 1, stderr);

	return (1);
}
