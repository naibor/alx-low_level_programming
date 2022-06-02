#include<stdio.h>
/**
 * main - Entry point of program
 *
 * description: A program that prints to the standard error
 *
 * Return: Should return 1
 */

int main(void)
{
	write(stderr, "%s", "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	
	return (1);
}
