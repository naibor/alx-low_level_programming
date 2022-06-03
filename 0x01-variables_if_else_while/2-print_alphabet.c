#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase
 *
 * Return: returns 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a' ; alphabets <= 'z' ; alphabets++)
	{
		putchar (alphabets);
	}

	return (0);
}
