#include <stdio.h>

/**
 * main - Function
 *
 * Description: prints the name of the file it was compiled from
 *
 * Return: returns 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
